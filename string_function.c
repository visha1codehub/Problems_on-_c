#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Hello ";
    char s2[] = "Vishal ";
    char s3[] = "Superman ";
    char s4[50];
    strcpy(s4, s1);
    strcat(s4, s3);
    strcat(s4, s2);
    printf("%s\n", s4);
    strcat(s1, s4);
    strcpy(s1, s2);
    printf("%s\n", s1);
    printf("Enter your full name : ");
    gets(s4);
    puts("Hello!");
    puts(s4);
    printf("%s\n", strcat(s4, s3));
    return 0;
}