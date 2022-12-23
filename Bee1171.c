#include <stdio.h>
int main()
{
    int n, x, counter[2001], i;

    for (int i = 0; i <= 2000; i++)
    {
        counter[i] = 0;
    }

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        counter[x]++;
    }

    for (int i = 1; i <= 2000; i++)
    {
        if(counter[i] > 0)
        printf("%d aparece %d vez(es)\n", i, counter[i]);
    }
    
    return 0;
}