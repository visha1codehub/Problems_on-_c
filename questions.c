#include <stdio.h>
#include <string.h>

int main()
{
    char str[40];
    printf("Enter your string...\n");
    fgets(str,sizeof(str),stdin);
    printf("Your input is......\n");
    // strcpy(strrev(str),str);
    puts(str);
    return 0;
}