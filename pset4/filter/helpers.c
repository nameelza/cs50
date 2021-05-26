#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int average = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue)/3);
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
        for (int j = 0; j < (width/2); j++)
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
    RGBTRIPLE temp[height][wigth];
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            RGBTRIPLE temp[i][j] = RGBTRIPLE image[i][j];
        }
    }


    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {

            int sumRed = int sumGreen = int sumBlue = int counter = 0

    // CHECK CORNERS

            // top right
            if (i > 0 && j < width)
                {
                    sumRed += RGBTRIPLE temp[i-1][j+1];
                    sumGreen += RGBTRIPLE temp[i-1][j+1];
                    sumBlue += RGBTRIPLE temp[i-1][j+1];
                    counter++;
                }

            // bottom right
            if (i < width && j < width)
                {
                    sumRed += RGBTRIPLE temp[i+1][j+1];
                    sumGreen += RGBTRIPLE temp[i+1][j+1];
                    sumBlue += RGBTRIPLE temp[i+1][j+1];
                    counter++;
                }
            
            // top left
            if (i > 0 && j > 0)
                {
                    sumRed += RGBTRIPLE temp[i-1][j-1];
                    sumGreen += RGBTRIPLE temp[i-1][j-1];
                    sumBlue += RGBTRIPLE temp[i-1][j-1];
                    counter++;
                }
                
            // bottom left
            if (i < height && j > 0)
                {
                    sumRed += RGBTRIPLE temp[i+1[j-1];
                    sumGreen += RGBTRIPLE temp[i+1][j-1];
                    sumBlue += RGBTRIPLE temp[i+1][j-1];
                    counter++;
                }
                
    // CHECK SIDES
            
            // top
            if (i > 0)
                {
                    sumRed += RGBTRIPLE temp[i-1[j];
                    sumGreen += RGBTRIPLE temp[i-1][j];
                    sumBlue += RGBTRIPLE temp[i-1][j];
                    counter++;
                }
            
            // bottom
            if (i < height)
                {
                    sumRed += RGBTRIPLE temp[i+1[j];
                    sumGreen += RGBTRIPLE temp[i+1][j];
                    sumBlue += RGBTRIPLE temp[i+1][j];
                    counter++;
                }
                
            // right
            if (j < width)
                {
                    sumRed += RGBTRIPLE temp[i][j+1];
                    sumGreen += RGBTRIPLE temp[i][j+1];
                    sumBlue += RGBTRIPLE temp[i][j+1];
                    counter++;
                }
                
            // left
            if (j > 0)
                {
                    sumRed += RGBTRIPLE temp[i][j-1];
                    sumGreen += RGBTRIPLE temp[i][j-1];
                    sumBlue += RGBTRIPLE temp[i][j-1];
                    counter++;
                }

    // ADD MIDDLE
            
            sumRed += RGBTRIPLE temp[i][j];
            sumGreen += RGBTRIPLE temp[i][j];
            sumBlue += RGBTRIPLE temp[i][j];
            counter++;
            
            // count average for each pixel
            temp[i][j].rgbtRed = round(sumRed/counter);
            temp[i][j].rgbtGreen = round(sumGreen/counter);
            temp[i][j].rgbtBlue = round(sumBlue/counter);
            
        }
    }

    
    // 
    
    
}
