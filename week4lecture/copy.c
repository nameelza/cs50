#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    
    char *t = s;
    
    t[0] = toupper(t[0]);
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

/// char * == string