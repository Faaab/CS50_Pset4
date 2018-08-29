#include <stdio.h>

typedef unsigned char BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover card.raw\n");
        return 1;
    }

    //remember name of input file
    char *infile = argv[1];

    //open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s\n", infile);
        return 2;
    }

    //initialize variables for naming .jpeg files, for remembering whether a .jpg file was found before, and initialize buffer
    int name_num = 0;
    char filename[8] = { 0 };
    BYTE buffer[512] = { 0 };
    int found = 0;
    FILE *outptr = NULL;


    while (fread(buffer, 1, 512, inptr) == 512)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && buffer[3] >= 0xe0 && buffer[3] <= 0xef)
        {
            if (found == 1)
            {
                fclose(outptr);
                name_num++;
            }

            found = 1;

            //Generate char* filename, for use in fopen
            sprintf(filename, "%03i.jpg", name_num);

            //open new .jpeg file
            outptr = fopen(filename, "w");

        }

        if (found == 1)
        {
            fwrite(buffer, 512, 1, outptr);
        }
    }

    //close all files, end program
    fclose(inptr);
    fclose(outptr);
    return 0;
}