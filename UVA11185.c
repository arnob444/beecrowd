#include <stdio.h>
int main()
{
    while (1)
    {
        long long int x;
        int i = 0, j, result[100000] = {0};
        scanf("%lld", &x);

        if (x < 0)
            break;

        while (x > 0)
        {
            result[i] = x % 3;
            x /= 3;
            i++;
        }
        for (j = i - 1; j >= 0; j--)
        {
            printf("%d", result[j]);
        }
        printf("\n");
    }
    return 0;
}

// input
//  10
//  100
//  1000
//  -1
