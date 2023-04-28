// #include <stdio.h>
// int main()
// {
//     int row, col, n;
//     while (scanf("%d", &n) != EOF)
//     {
//         for (row = 0; row < n; row += 2)
//         {
//             for (col = 0; col < (n - row) / 2; col++)
//                 printf(" ");
//             for (col = row; col >= 0; col--)
//                 printf("*");
//             printf("\n");
//         }
//         for (row = 0; row < n / 2; row++)
//             printf(" ");
//         printf("*\n");
//         for (row = 1; row < n / 2; row++)
//             printf(" ");
//         printf("***\n\n");
//     }
//     return 0;
// }

// Online C compiler to run C program online
// #include <stdio.h>
// int main()
// {
//     int row, col, n;
//     while (scanf("%d", &n) != EOF)
//     {
//         for (row = 1; row <= n - 2; row += 2)
//         {
//             for (col = 1; col <= (n - 2) - row; col++)
//             {
//                 printf(" ");
//             }
//             for (col = 1; col <= 2 * row - 1; col++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         for (row = 1; row <= n / 2; row++)
//             printf(" ");
//         printf("*\n");
//         for (row = 1; row < n / 2; row++)
//             printf(" ");
//         printf("***\n\n");
//     }
//     return 0;
// }
