#include <stdio.h>
int main()
{
    int i, n, p, min;
    scanf("%d", &n);
    int X[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }
    min = X[0];                // X[0] = 1 it's compare to X[i]
    for (i = 1; i < n; i++)
    {
        if (min > X[i])        // x[i] starts from x[1] = 2
        {
            min = X[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", p);
    return 0;
}