#include <stdio.h>
int main()
{
    while (1)
    {
        long long int n;
        int i = 0, j, result[10000] = {0};
        scanf("%lld", &n);
        if (n < 0)
            break;
        while (n > 0)
        {
            result[i] = n % 3;
            n = n / 3;
            i++;
        }
        for (j = i-1 ; j >= 0; j--)
        {
            printf("%d", result[j]);
        }
        printf("\n");
    }
}