#include <stdio.h>
int islucky(int n)
{
    static int counter = 2;
    if (counter > n)
        return 1;
    if (n%counter == 0)
        return 0;
    int next_pos = n - n/counter;
    counter++;
    return islucky(next_pos);
}
int main()
{
    int x;
    printf("Enter your number : ");
    scanf("%d", &x);
    if (islucky(x))
        printf("%d is a lucky number...\n", x);
    else
        printf("%d is not a lucky number...\n", x);
    return 0;
}
                            //  failed   //
// // *********************PRINT LUCKY NUMBER********************

// #include <stdio.h>
// int islucky(int n)
// {
//     static int counter = 2;
//     if (counter > n)
//         return 1;
//     if (n % counter == 0)
//         return 0;
//     int next_pos = n - n / counter;
//     counter++;
//     islucky(next_pos);
// }
// int main()
// {
//     int x;
//     printf("Enter your number of term : ");
//     scanf("%d", &x);
//     for (int i = 1; i <= x; i++)
//     {
//         if (islucky(i))
//             printf("%d ", i);
//     }
//     printf("\n");
//     return 0;
// }