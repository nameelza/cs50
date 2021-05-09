#include <stdio.h>
#include <cs50.h>

int main(void)
{
    ///Prompt user for height of blocks
    int height;
    do
    {
        height = get_int("Height:\n");
    }
    while (height < 1 || height > 8);
    
    ///Print out that many # aligned to the right
    for (int i = 1; i <= height; i++)
    {
        ///Print out spaces before the #
        for (int n = height - i; n > 0; n--)
        {
            printf(" ");
        }
        ///Print out # of the first pyramid
        for (int x = 1; x <= i; x++)
        {
            printf("#");
        }
        ///Print out gap between the pyramids
        printf("  ");
        ///Print out # of the second pyramid
        for (int second = 1; second <= i; second++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    
}