// // C program to print maximum value of
// // unsigned int.
// #include<stdio.h>

// int main()
// {
// unsigned int max;
// max = 0;
// max = ~max;
// printf("Max value : %u\n", max);
// return 0;
// }

// C program to find if machine is little
// endian or big endian.
// #include <stdio.h>

// int main()
// {
// unsigned int n = 1;
// char *c = (char*)&n;
// if (*c)
// 	printf("LITTLE ENDIAN");
// else
// 	printf("BIG ENDIAN");
// return 0;
// }

#include <stdio.h>

#define MACRO(num, str) ({\
			printf("%d", num);\
			printf(" is");\
			printf(" %s number", str);\
			printf("\n");\
		})

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num & 1)
		MACRO(num, "Odd");
	else
		MACRO(num, "Even");



    printf("%d",11&1);
	return 0;
}
