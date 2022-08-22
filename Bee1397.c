#include <stdio.h>
int main()
{
    int a, b, n, i, s1, s2;
    while (1)
    {
        s1 = 0;
        s2 = 0;
        scanf("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &b);
            if (a > b)
                s1++;
            if (b > a)
                s2++;
        }
        printf("%d %d\n", s1, s2);
    }
    return 0;
}
