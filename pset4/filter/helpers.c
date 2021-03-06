#include "helpers.h"
#include <math.h>
#include <cs50.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int average = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Calculate sepia value of each byte
            float sepiaRed = .393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue;
            float sepiaGreen = .349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue;
            float sepiaBlue = .272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue;

            /// Assign Red to a new value
            if (sepiaRed > 255)
            {
                image[i][j].rgbtRed = 255;
            }
            else
            {
                image[i][j].rgbtRed = round(sepiaRed);
            }

            /// Assign Green to a new value
            if (sepiaGreen > 255)
            {
                image[i][j].rgbtGreen = 255;
            }
            else
            {
                image[i][j].rgbtGreen = round(sepiaGreen);
            }

            /// Assign Blue to a new value
            if (sepiaBlue > 255)
            {
                image[i][j].rgbtBlue = 255;
            }
            else
            {
                image[i][j].rgbtBlue = round(sepiaBlue);
            }
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < (width / 2); j++)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - (j + 1)];
            image[i][width - (j + 1)] = temp;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // create temporary array-duplicate of the image to be blurred
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            int sumRed;
            int sumGreen;
            int sumBlue;
            float counter;

            sumRed = sumGreen = sumBlue = counter = 0;

            // ADD CORNERS

            // top right
            if (i > 0 && j + 1 < width)
            {
                sumRed += temp[i - 1][j + 1].rgbtRed;
                sumGreen += temp[i - 1][j + 1].rgbtGreen;
                sumBlue += temp[i - 1][j + 1].rgbtBlue;
                counter++;
            }

            // bottom right
            if (i + 1 < height && j + 1 < width)
            {
                sumRed += temp[i + 1][j + 1].rgbtRed;
                sumGreen += temp[i + 1][j + 1].rgbtGreen;
                sumBlue += temp[i + 1][j + 1].rgbtBlue;
                counter++;
            }

            // top left
            if (i > 0 && j > 0)
            {
                sumRed += temp[i - 1][j - 1].rgbtRed;
                sumGreen += temp[i - 1][j - 1].rgbtGreen;
                sumBlue += temp[i - 1][j - 1].rgbtBlue;
                counter++;
            }

            // bottom left
            if (i + 1 < height && j > 0)
            {
                sumRed += temp[i + 1][j - 1].rgbtRed;
                sumGreen += temp[i + 1][j - 1].rgbtGreen;
                sumBlue += temp[i + 1][j - 1].rgbtBlue;
                counter++;
            }


            // ADD SIDES

            // top
            if (i > 0)
            {
                sumRed += temp[i - 1][j].rgbtRed;
                sumGreen += temp[i - 1][j].rgbtGreen;
                sumBlue += temp[i - 1][j].rgbtBlue;
                counter++;
            }

            // bottom
            if (i + 1 < height)
            {
                sumRed += temp[i + 1][j].rgbtRed;
                sumGreen += temp[i + 1][j].rgbtGreen;
                sumBlue += temp[i + 1][j].rgbtBlue;
                counter++;
            }

            // right
            if (j + 1 < width)
            {
                sumRed += temp[i][j + 1].rgbtRed;
                sumGreen += temp[i][j + 1].rgbtGreen;
                sumBlue += temp[i][j + 1].rgbtBlue;
                counter++;
            }

            // left
            if (j > 0)
            {
                sumRed += temp[i][j - 1].rgbtRed;
                sumGreen += temp[i][j - 1].rgbtGreen;
                sumBlue += temp[i][j - 1].rgbtBlue;
                counter++;
            }

            // ADD MIDDLE

            sumRed += temp[i][j].rgbtRed;
            sumGreen += temp[i][j].rgbtGreen;
            sumBlue += temp[i][j].rgbtBlue;
            counter++;

            // count average for each pixel and assign it to the original image
            image[i][j].rgbtRed = round(sumRed / counter);
            image[i][j].rgbtGreen = round(sumGreen / counter);
            image[i][j].rgbtBlue = round(sumBlue / counter);
        }
    }
}