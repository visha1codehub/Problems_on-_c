#include <stdio.h>

int main()
{
    int ary[] = {2,45,87,87,34,6,0,53,57,907};
    // calculate size in bytes
    int arraySize = sizeof(ary);
    int intSize = sizeof(ary[0]);
    // length
    int length = arraySize / intSize;
    printf("%d",length);



    int len;


    len = sizeof(ary)/sizeof(ary[0]);
    printf("%d",len);

    





    return 0;
}