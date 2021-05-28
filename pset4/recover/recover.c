#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    // open memory card
    FILE *file = fopen(argv[1], "r");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 2;
    }

    // repeat until the end of card:
    // read 512 bytes into a buffer

    int n = 0;
    while(fread(&buffer, 512 bytes, 1, file));
    {
        if (buffer[0] == 0xff || buffer[1] == 0xd8 || buffer[2] == 0xff || (buffer[3] & 0xf0) == 0xe0)
        {
            if (n != 0)
            {
                fclose(file);
            }
            
            sprintf(filename, "%03i.jpg", n);
            n += 1;
            FILE *img = fopen(filename, "w");
            fwrite(&buffer, 512 bytes, 1, filename)
        }

    }

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