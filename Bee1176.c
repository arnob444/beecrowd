// 0 1 1 2 3 5 8 Output sample
// 0 1 2 3 4 5 6 Input  sample
#include <stdio.h>
int main()
{
    int i, x, y;
    long long int N[60];
    N[0] = 0;
    N[1] = 1;
    for (i = 2; i < 61; i++)
    {
        N[i] = N[i - 1] + N[i - 2];
    }
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &y);
        printf("Fib(%d) = %lld\n", y, N[y]);
    }
    return 0;
}

