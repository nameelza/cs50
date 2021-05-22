#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", *&n);
}

/// & - what adress the variable is at
/// * - go to the following adsress
/// %p for addressed