#include <stdio.h>
int main()
{
    int n, i, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        printf("1");

        for (int i = 1; i <= x; i++)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
