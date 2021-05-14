#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    
    /// Prompts user for text
    string input = get_string("plaintext: ");
    
    printf("ciphertext: ");
    
    /// Encrypts user input
    char a;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (isalpha(input[i]))
        {
            if (islower(input[i]))
            {
                a = ((((input[i] - 97) + k) % 26) + 97);
                printf("%c", a);
            }
            else
            {
                a = ((((input[i] - 65) + k) % 26) + 65);
                printf("%c", a);
            }
        }
        else
        {
            printf("%c", input[i]);
        }
    }
    printf("\n");
    
}



