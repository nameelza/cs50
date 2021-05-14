#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/// Get key
int main(int argc, string argv[])
{
    /// Validate key
    if (argc == 2)
    {
        
        for (int i = 0, len = strlen(argv[1]); i < len; i++)
        {
            /// Check for non-alphabetic characters
            if (!isalpha(argv[1][i]))
            {
                printf("Key must only contain alphabetic characters.\n");
                return 1;
            }
            /// Check key length
            else if (len != 26)
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
        }
        
        /// Check for repeated characters (case-insensitive)
        for (int i = 0, n = strlen(argv[1]); i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++ )
            {
                if (argv[1][i] == argv[1][j])
                {
                    printf("Key must not contain repeated characters.\n");
                    return 1;
                }
            }
        } 
        return 0;
    }
    else
    {
        printf("Usage: ./substitution key");
        return 1;
    }
}







/// Get plaintext

/// Encipher

/// For each alphabetic character, determine what letter it maps to
/// Preserve case
/// Leave non-alphabetic characters as-is

/// Print ciphertext