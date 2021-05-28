#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    // open memory card
    FILE *file = fopen(argv[1], "r");

    // repeat until the end of card:
    // read 512 bytes into a buffer
    ?? buffer;
    fread(?, 512 bytes, 1, file)

    // if start of new jpeg
        // if start of first jpeg
        // ...
        // else
        // close the previos file and open up new
    // else
    // if already found jpeg
    // keep writing another 512 bytes block

    // close any remaining files

    buffer[0] == 0xff
    buffer[1] == 0xd8
    buffer[2] == 0xff
    (buffer[3] & 0xf0) == 0xe0

}