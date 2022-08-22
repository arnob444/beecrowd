#include <stdio.h>
int main()
{
    int a, x, counter[2001];
    for (int i = 0; i <= 2000; i++)
    {
        counter[i] = 0;
    }
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &x);
        counter[x]++;
    }
    for (int i = 1; i <= 2000; i++)
    {
        if (counter[i] > 0)
            printf("%d aparece %d vez(es)\n", i, counter[i]);
    }
    return 0;
}