#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    while (scanf("%d%d%d%d", &a, &b, &c, &d) != EOF)
    {
        e = a + b + c + d;
        printf("%d\n", e - 3);
    }

    return 0;
}