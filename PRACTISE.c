// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>
#include <stdlib.h>

void main()
{
    // int arr[100] = { 0 };
    // int i, x, pos, n = 10;

    // // initial array of size 10
    // for (i = 0; i < 10; i++)
    // 	arr[i] = i + 1;

    // // print the original array
    // for (i = 0; i < n; i++)
    // 	printf("%d ", arr[i]);
    // printf("\n");

    // // element to be inserted
    // x = 50;

    // // position at which element
    // // is to be inserted
    // pos = 11;

    // // increase the size by 1
    // n++;

    // // shift elements forward
    // for (i = n-1; i >= pos; i--)
    // 	arr[i] = arr[i - 1];

    // // insert x at pos
    // arr[pos - 1] = x;

    // // print the updated array
    // for (i = 0; i < n; i++)
    // 	printf("%d ", arr[i]);
    // printf("\n");

    // return 0;

    // // *******Factorial by for loop******
    // int n, pro = 1;
    // printf("Enter the number : ");
    // scanf("%d",&n);
    // for (int i = 1; i <= n; i++)
    // {
    //     pro = pro*i;
    // }
    // printf("Factorial of your number is %d.\n",pro);

    // // *******Factorial by while loop******
    // int a = 1;
    // while (a > n)
    // {
    //     pro = pro*a;
    //     a++;
    // }
    // printf("Factorial of your number is %d.\n",pro);

    // int num, count = 1, rem, sum;

    // while(count <= 500)
    // {
    //     num = count;
    //     sum = 0;

    //     while(num)
    //     {
    //         rem = num % 10;
    //         sum = sum + (rem * rem * rem);
    //         num = num / 10;
    //     }

    //     if(count == sum)
    //     {
    //         printf("%d is a Armstrong number\n", count);
    //     }

    //     count++;
    // }
    // int n;
    // printf("Enter the number of terms : ");
    // scanf("%d",&n);

    // //Simple Stat pattern//
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // //Reverse Star pattern//
    // for (int i = n+1; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // // Simple Pyramid//
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = i; j > 1; j--)
    //     {
    //         printf("  ");
    //     }
    //     for (int j = 0; j <= 2*(n-i); j++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }
    // //Reverse pyramid//
    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = i; j > 1; j--)
    //     {
    //         printf("  ");
    //     }
    //     for (int j = 0; j <= 2*(n-i); j++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = i; j <= n; j++)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");

    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i-j == 0)
    //         {
    //             printf("%d",j);
    //         }

    //         else if ((i+j == n+1) && (i !=  j))
    //         {
    //             printf("%d",j);
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }

    //     }
    //     printf("\n");

    // }
    // char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for (int j = 1; j <= 2*(n-i+1)-1; j++)
    //     {
    //         printf(" %c",arr[j-1]);
    //     }
    //     printf("\n");
    // }
    // char ar[5] = {'a','s','h','\0'};
    // printf("%c\n",ar[0]);
    // printf("%c\n",ar[1]);
    // printf("%c\n",ar[2]);
    // printf("%d\n",ar[3]);
    // printf("%d\n",ar[4]);
    // printf("%d\n",ar[5]);

    // float x = 23.54,y;
    // int a = 94, *ptr;
    // // ptr = &x;
    // ptr = &a;
    // printf("%d\n",*ptr);

    // int n;
    // printf("Enter thr length of array : ");
    // scanf("%d", &n);
    // int arr[n];
    // printf("Enter the elements of the array :\n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // printf("Your original array is --> { ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("}\n");

    // int temp;

    //             // *****Selection Sorting***** //
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    //               // ******Bubble Sorting****** //
    // for (int i = 0; i < n -1 ; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }

    //              // *****Insertion Sorting***** //
    // int pos;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = i; j >= 0; j--)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             pos = j + 1;
    //             break;
    //         }
    //         else
    //             pos = 0;
    //     }
    //     temp = arr[i];
    //     for (int k = i; k > pos; k--)
    //     {
    //         arr[k] = arr[k - 1];
    //     }
    //     arr[pos] = temp;
    // }

    // printf("Your sorted array is --> { ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("}\n");
    // int k = 1;
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ",k);
    //         k++;
    //     }
    //     printf("\n");
        
    // }
    // for (int i = 4; i >= 1; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("%d ",i-j);
    //     }
    //     printf("\n");
        
    // }

    // float a = 12.233456776543;
    // double b = 28.9856787654;
    // printf("%f\n",a);
    // printf("%lf\n",b);
    // printf("%ld\n",sizeof(a));
    // printf("%ld\n",sizeof(b));


    // int i;
    // for ( i = 0; i < 5; i++);
    // {
    // printf("%d\n",i);
    // }
    // return 0;
    // char str[100];
    // FILE *fptr = NULL;
    // fptr = fopen("my_file.txt","a");
    // if (fptr == NULL)
    // {
    //     printf("File is null.\n");
    //     exit(1);
    // }
    // fgets(str,sizeof(str),stdin);
    // fputs(str,fptr);
    // fclose(fptr);

    // int i = 2, j;
    // j = i<<1;
    // printf("%d\n",j);\

    // int a;
    // a = 1/2*3+1-2;
    // printf("%d\n",a);
    
    int a =189;
    printf("%d\n",~a);
}
