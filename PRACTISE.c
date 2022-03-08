// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>

int main()
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
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

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

    
    
     return 0;
} 
    
