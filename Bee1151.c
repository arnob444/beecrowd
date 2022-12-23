#include <stdio.h>
int main()
{
    int fst = 0, snd = 1, fibo, n, i;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        printf("%d ", fst);
        fibo = fst + snd;
        fst = snd;
        snd = fibo;
    }
    printf("%d\n", fst);
    return 0;
}            
