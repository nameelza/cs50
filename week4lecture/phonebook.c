#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebbok.csv", "a"); // FILE == a file, *file == pointer to the file
    // "a" == append, "r" == read, "w" == write
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number); // adding name and number to the file

    fclose(file);

}