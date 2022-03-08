#include <stdio.h>

int main()
{
    char temp;
    char arr[] = "QAZXSWEDCVFRTGBNHYUJMKIOLP";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    printf("Sorted array is --> '%s'\n",arr);
    
    return 0;
}