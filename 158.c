#include<stdio.h>


int main()
{
    int r, c, n;
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        printf("%d ", r);
    }
    for (c = n - 1; c >= 1; c--)
    {
        printf("%d ", c);
    }

    return 0;
}

// int reverse(int r, int c)
// {
//     int n;
//     for (r = 1; r <= n; r++)
//     {
//         printf("%d ", r);
//     }
//     for (c = n - 1; c >= 1; c--)
//     {
//         printf("%d ", c);
//     }
//     return (r, c);
// }