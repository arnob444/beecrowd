/*
0 + 3 = 3
3 + 4 = 7
7 + 5 = 12
12 + 6 = 18 */
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