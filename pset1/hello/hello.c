#include <stdio.h>
#include <cs50.h>

int main(void)
{
    ///Prompts user for name
    string name = get_string("What's your name?\n");
    printf("Hello, %s\n", name);
}
