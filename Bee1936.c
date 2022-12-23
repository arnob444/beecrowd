// #include <stdio.h>
// int main()
// {
//     int a[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
//     int n, c = 0, i;

//     scanf("%d", &n);
//     while (n != 0)
//     {
//         for (i = 0; i < n; i++)
//         {
//             if (a[i] > n)
//                 break;
//         }
//         if (a[i] <= n)
//         {
//             n -= a[i];
//         }
//         else
//         {
//             n -= a[i - 1];
//         }
//         c++;
//     }
//     printf("%d\n", c);
//     return 0;
// }

// // problem

#include <stdio.h>
int main()
{
    int fact[9];
    fact[0] = 1;
    for (int i = 1; i <= 8; i++)
        fact[i] = i * fact[i - 1];
    int N;
    scanf("%d", &N);

    int x = 0;
    for (int i = 8; i >= 0; i--)
    {
        x += (N / fact[i]);
        N = N % fact[i];
    }

    printf("%d\n", x);
    return 0;
}