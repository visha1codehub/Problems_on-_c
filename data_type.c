#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


// int main()
// {
// char a;	              //1 byte	-128 to 127 or 0 to 255
// unsigned char b;	  //1 byte	0 to 255
// signed char  c;       //1 byte 	-128 to 127
// int	d;                //2 or 4 bytes -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
// unsigned int e;	      //2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295
// short f;              //2 bytes	-32,768 to 32,767
// unsigned short g;	  //2 bytes	0 to 65,535
// long h;               //8 bytes	-9223372036854775808 to 9223372036854775807
// unsigned long i;      //8 bytes	0 to 18446744073709551615
//     return 0;
// }



int main() 
{

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );
    return 0;
}