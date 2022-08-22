#include <stdio.h>
int main()
{
    long long int a, b, c;
    while (1)
    {
        scanf("%lld%lld", &a, &b);
        if (a == 0 && b == 0)
            break;
        c = a * b;
        printf("%d\n", c);
    }

    return 0;
}