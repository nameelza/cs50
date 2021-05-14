#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");

    int l = 0;
    int w = 1;
    int s = 0;
    
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
    
    printf("%i\n%i\n%i\n", l, w, s);


}



// index = 0.0588 * L - 0.296 * S - 15.8