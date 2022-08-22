/*
3 + 3 = 6
6 + 4 = 10
10 + 5 = 15
15 + 6 = 21 */
#include <stdio.h>
int main()
{
    int x, z, counter = 1, sum = 0, i;
    scanf("%d%d", &x, &z);
    while (x >= z)
    {
        scanf("%d", &z);
    }
    for (i = x; i <= z; i++)
    {
        sum += i;
        if (sum > z)
            break;
        counter++;
    }
    printf("%d\n", counter);
    return 0;
}
