#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr = NULL;
    char c;
    long int len;

    fptr = fopen("my_file.txt","r");
    if (fptr == NULL)
    {
        printf("No file.\n");
        exit(1);
    }
    fseek(fptr,0,SEEK_END);
    len = ftell(fptr);
    printf("%ld\n",len);         //*********Length of the file*********//
    return 0;
}