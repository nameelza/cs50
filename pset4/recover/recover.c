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

    BYTE buffer[512]
    int n = 0;
    while(fread(&buffer, 512, 1, file));
    {
        // if start of a new jpg
        if (buffer[0] == 0xff || buffer[1] == 0xd8 || buffer[2] == 0xff || (buffer[3] & 0xf0) == 0xe0)
        {
            // close previous
            if (n != 0)
            {
                fclose(file);
            }
            
            // open up new jpg
            sprintf(filename, "%03i.jpg", n);
            FILE *img = fopen(filename, "w");
            n += 1;
        }
        
        // keep writing if still a jpeg
        else if (n != 0)
        {
            fwrite(&buffer, 512 , 1, img);
        }
    }
    
    fclose(file);
    fclose(img);
}