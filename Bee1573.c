// [Mathematics]  ∛x = cbrt(x) [In C Programming]
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a, b, c, x, n;
    while (scanf("%d%d%d", &a, &b, &c))
    {
        if (a == 0 && b == 0 && c == 0)
            break;
        n = a * b * c;
        x = (int)cbrt(n);
        printf("%d\n", x);
    }
    return 0;
}