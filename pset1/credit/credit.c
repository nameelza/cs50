#include <stdio.h>
#include <cs50.h>

int main(void)
{

    /// Promp user for a card number
    long number;
    number = get_long("Your card number:\n");


    /// Calculate the length of the given card number
    
    /// American Express uses 15-digit numbers
    /// MasterCard uses 16-digit numbers
    /// Visa uses 13 and 16-digit numbers
    
    int len = 0;
    long num = number;
    
    while (num > 0)
    {
        num = num / 10;
        len ++;
    }
    
    
    ///Check if the lenght is valid
    
    if (len != 13 && len != 15 && len != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    
    
    /// Calculate checksum
    
    long n = number;
    int digit1;
    int digit2;
    long sum1 = 0;
    long sum2 = 0;
    long total = 0;
    
    while (n > 0)
    {
        digit1 = n % 10;
        n = n / 10;
        sum1 += digit1;
        
        digit2 = n % 10;
        n = n / 10;
        digit2 = digit2 * 2;
        
        sum2 += (digit2 % 10) + (digit2 / 10);
    }
    
    total = sum1 + sum2;
    
    if ((total % 10) != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    
    
    /// Check for starting digits
    
    /// All American Express numbers start with 34 or 37
    /// Most MasterCard numbers start with 51, 52, 53, 54, or 55
    /// Visa numbers start with 4
    
    long s = number;
    while (s > 100)
    {
        s = s / 10;
    }
    
    int d1;
    int d2;
    
    d2 = s % 10;
    d1 = s / 10;

    /// Print out the name name of the card
    
    if ((d1 == 3 && (d2 == 4 || d2 == 7)) && len == 15)
    {
        printf("AMEX\n");
    }
    
    else if ((d1 == 5 && (d2 >= 1 && d2 <= 5)) && len == 16)
    {   
        printf("MASTERCARD\n");
    }
    
    else if (d1 == 4)
    {
        printf("VISA\n");
    }
    
    else
    {
        printf("INVALID\n");
    }
    
}