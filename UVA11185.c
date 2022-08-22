#include <stdio.h>
int main()
{
    int n, i;
    int a[100];
    while (scanf("%d", &n) != EOF)
    {
        if (n < 0)
            break;
        for ( i = 0; n > 0; i++)
        {
            a[i] = n % 3;
            n = n / 3;
        }
        for ( i = i - 1; i >= 0; i--)
        {
            printf("%d", a[i]);
        }
    }
    return 0;
}