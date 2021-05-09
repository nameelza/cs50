#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    ///Prompts user for the amount of change owed
    float change;
    do
    {
        change = get_float("The change owed:\n");
    }
    while (change <= 0);
    
    /// Converts dollars to cents
    int cents = round(change * 100);
    
    int n = 0;
    int remain = cents;
    
    /// Count the amount of 25c coins
    while (remain >= 25)
    {
        remain -= 25;
        n ++;
    }
     
    /// Counts the amount of 10c coins
    while (remain >= 10)
    {
        remain -= 10;
        n ++;
    }
    
    /// Counts the amount of 5c coins 
    while (remain >= 5)
    {
        remain -= 5;
        n ++;
    }
    
    /// Counts the amount of 1c coins  
    while (remain >= 1)
    {
        remain -= 1;
        n ++;
    }
 
    
    printf("%i\n", n);
    
 
    
    
}