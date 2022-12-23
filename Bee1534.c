#include <stdio.h>
int main()
{
    int i, j, n;
    while (scanf("%d", &n) != EOF)
    {
        if (n % 2 == 0)
        {
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    if (j == i)
                        printf("1");
                    else if (i + j == n + 1)
                        printf("2");
                    else
                        printf("3");
                }
                printf("\n");
            }
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    if (i + j == n + 1)
                        printf("2");
                    else if (j == i)
                        printf("1");
                    else
                        printf("3");
                }
                printf("\n");
            }
        }
    }
    return 0;
}