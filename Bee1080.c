#include <stdio.h>
int main()
{
    int i, max = 0, n, position;

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &n);

        if (n > max)
        {
            max = n;
            position = i;
        }
    }
    printf("%d\n%d\n", max,position);

    return 0;
}
