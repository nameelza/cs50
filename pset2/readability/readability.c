#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    str text = get_string("Text: ");
    
    if (isalpha(text))
    {
        int sum = 0;
        
        for (i = 0, n = strlen(text); i < n; i++)
        {
            sum += 1;
        }
        printf("%i", sum);
    }
}



// index = 0.0588 * L - 0.296 * S - 15.8