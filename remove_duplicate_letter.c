#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0, k = 1;
    while (str[i])
    {
        while (str[k])
        {
            if (str[i] != str[k])
            {
                str[j] = str[i];
                j++;
            }
            k++;
        }

        i++;
    }
    str[j] = '\0';
    puts(str);
    return 0;
}