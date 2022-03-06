#include <stdio.h>

int main()
{
    FILE *fileptr = NULL;
    char string[70] = "I am writing in the file by file write mode in c.";
    // ******Reading the file******
    fileptr = fopen("my_file.txt","r");
    // fscanf(fileptr,"%s",string);
    
    // printf("CONTENT OF THE FILE IS: %s\n",string);

    // ******Writing the file******
    // fileptr = fopen("my_file.txt","w");
    // fprintf(fileptr,"%s",string);

    // // ****Apending the file*****
    // fileptr = fopen("my_file.txt","a");
    // fprintf(fileptr,"%s",string);
    
    return 0;
}