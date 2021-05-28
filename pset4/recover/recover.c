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

    BYTE buffer[512];
    FILE *img = NULL;
    int count = 0;
    char filename[8];
    
    while (fread(&buffer, 512, 1, file))
    {
        // if start of a new jpg
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // close previous
            if (count != 0)
            {
                fclose(img);
            }
            
            // open up new jpg
            sprintf(filename, "%03i.jpg", count);
            img = fopen(filename, "w");
            count ++;
        }
        
        // keep writing in
        if (count != 0)
        {
            fwrite(&buffer, 512, 1, img);
        }
    }
    
    fclose(file);
    fclose(img);
    
    return 0;
}
