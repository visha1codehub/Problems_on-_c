// /* C program to remove spaces from a string */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int l;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    printf("%s", str);
    l = strlen(str);
    printf("%d\n", l - 1);
    return 0;
}

// #include <stdio.h>

// char *remove_white_spaces(char *str)
// {
//     int i = 0, j = 0;
//     while (str[i])
//     {
//         if (str[i] != ' ')
//             str[j++] = str[i];
//         i++;
//     }
//     str[j] = '\0';
//     return str;
// }

// int main()
// {
//     char str[50];
//     printf("\nEnter a string : ");
//     gets(str);
//     remove_white_spaces(str);
//     puts(str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int len;
//     char str[100];
//     printf("Enter your string...\n");
//     gets(str);

//     len = strlen(str);
//     for (int i = 0; i < len; i++)
//     {
//         if (str[i] == ' ')
//         {
//             for (int j = i; j < len-1; j++)
//             {
//                 str[j] = str[j+1];
//             }
//             len--;
//         }

//     }
//     printf("After removing spaces....\n");
//     puts(str);

//     return 0;
// }
