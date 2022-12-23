#include <stdio.h>
int main()
{
    while (1)
    {
        int a, b, i, s = 0, temp;
        scanf("%d%d", &a, &b);
        if (a <= 0 || b <= 0)
            break;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for (i = a; i <= b; i++)
        {
            printf("%d ", i);
            s = s + i;
        }
        printf("Sum=%d\n", s);
    }
    return 0;
}