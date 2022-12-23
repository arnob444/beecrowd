#include <stdio.h>
int main()
{
    int i, j, k, a, b, half_n, n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;

        int arr[n][n];
        half_n = n / 2;

        if (n % 2 != 0)
        {
            half_n++;
        }

        a = 0;
        b = n - 1;
        
        for (k = 1; k <= half_n; k++)
        {
            for (i = a; i <= b; i++)
            {
                for (j = a; j <= b; j++)
                {
                    arr[i][j] = k;
                }
            }
            a++;
            b--;
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    printf("%3d", arr[i][j]);
                }
                else
                {
                    printf(" %3d", arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}