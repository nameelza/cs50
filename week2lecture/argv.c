#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}

/// input ./argv bear
/// output hello, bear

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) /// argument count & argument values
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }
}

/// input bear
/// output
/// b
/// e
/// a
/// r

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

/// input ./argv mom
/// output hello, mom
/// input echo $?
/// ouput 0

/// input ./argv2 my mom
/// output missing command-line argument
/// input echo $?
/// ouput 1
