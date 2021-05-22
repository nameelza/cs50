#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}

/// & - what adress the variable is at
/// * - go to the following adsress
/// %p for addresses (pointers store the address)