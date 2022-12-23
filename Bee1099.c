#include <stdio.h>
int main()
{
    int n, x, y, i, j, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        if (x > y)
        {
            for (j = y + 1, sum = 0; j < x; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
        }
        else
            for (j = x + 1, sum = 0; j < y; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
        printf("%d\n", sum);
    }
}