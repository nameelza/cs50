#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    str text = get_string("Text: ");
        
    for (i = 0, n = strlen(text); i < n; i++)
    {
        
        int l = 0;
        int w = 0;
        int s = 0;
        
        
        if (isalpha(i))
        {
            l ++;
        }
        else if (i == " ")
        {
            w ++;
        }
        else if (i == "." || i == "!" || i == "?")
        {
            s ++;
        }
    }
    
        
    
}



// index = 0.0588 * L - 0.296 * S - 15.8