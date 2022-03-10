#include <stdio.h>

int main()
{
    char brc[50];
    printf("Enter your mathematical statement :\n");
    fgets(brc,sizeof(brc),stdin);
    int i = 0, j = 0;
    while (brc[i])
    {
        if (brc[i] != '(' && brc[i] != ')' && brc[i] != '[' && brc[i] != ']' && brc[i] != '{' && brc[i] != '}' && brc[i]!=' ')
        {
            brc[j++] = brc[i];
        }
        i++;
    }
    brc[j] = '\0';

    printf("After removing all the brackets..........\n");
    puts(brc);

    return 0;

}