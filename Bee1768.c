#include <stdio.h>
int main()
{
    int row, col, n;
    while (scanf("%d", &n) != EOF)
    {
        for (row = 0; row < n; row += 2)
        {
            for (col = 0; col < (n - row) / 2; col++)
                printf(" ");
            for (col = row; col >= 0; col--) //p
                printf("*");
                printf("\n");
        }
        for (row = 0; row < n / 2; row++)
            printf(" ");
            printf("*\n");
        for (row = 1; row < n / 2; row++)
            printf(" ");
            printf("***\n\n");
    }
    return 0;
}
