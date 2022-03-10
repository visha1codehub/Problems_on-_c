#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1 = NULL;
    FILE *fptr2 = NULL;
    char c;

    fptr1 = fopen("my_file.txt","r");
    if (fptr1 == NULL)
    {
        printf("No file.\n");
        exit(1);
    }

    fptr2 = fopen("destination.txt","a");
    if (fptr2 == NULL)
    {
        printf("No file.\n");
        exit(1);
    }

    while ((c = fgetc(fptr1)) != EOF)
    {
        fputc(c,fptr2);
    }

    fclose(fptr1);
    fclose(fptr2);

    printf("Succesfully Copied.\n");
    
    return 0;
}