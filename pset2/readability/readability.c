#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    ///Prompts user fro text
    string text = get_string("Text: ");

    /// Counts the number of letters, words and sentences in the text
    float l = 0;
    float w = 1;
    float s = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            l ++;
        }
        else if (text[i] == ' ')
        {
            w ++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            s ++;
        }
    }
    
    /// Counts the average number of letters and sentences per 100 words
    float avl = (l / w) * 100;
    float avs = (s / w) * 100;
    
    /// Counts the reading grade index of the text
    float index = 0.0588 * avl - 0.296 * avs - 15.8;
    
    /// Outputs the grade result
    int sum = round(index);
    
    if (sum < 1)
    {
        printf("Before Grade 1\n");
    }
    
    else if (sum > 16)
    {
        printf("Grade 16+\n");
    }
    
    else
    {
        printf("Grade %i\n", sum);
    }
   
}



