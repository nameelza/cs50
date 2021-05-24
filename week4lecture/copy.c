#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }
    
    // NULL in context of pointers
    // NUL in context of characters
    
    
    // for (int i = 0, n = strlen(s); i < n + 1; i++)
    // {
    //     t[i] = s[i]; /// == *(t+i) = *(s+i);
    // }
    
    strcpy(t, s); //(destination, source)
    
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    
    free(t); /// give back the memory taken using mallock
}

/// char * == string
/// malloc = memory allocation