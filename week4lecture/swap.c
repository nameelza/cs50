#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); // passing addresses of x and y
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b) // pointers of a and b
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}