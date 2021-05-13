#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//atoi function to convert string to integer

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 0;
            }

        int k = atoi(argv[1]);
        printf("Success\n");
        printf("%i\n", k);
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}


