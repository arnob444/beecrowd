#include <stdio.h>
int main()
{
    int i, j, n, x, y, a = 1;
    scanf("%d %d", &x, &y);
    int line = y / x;
    n = x;
    for (i = 1; i <= line; i++)
    {
        printf("%d", a);
        for (j = a + 1; j <= n; j++)
            printf(" %d", j);
        printf("\n");
        a += x;
        n += x;
    }
    return 0;
}
