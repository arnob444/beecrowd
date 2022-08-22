#include <stdio.h>
int main()
{
    int l, r;
    while (1)
    {
        scanf("%d%d", &r, &l);
        if (r == 0 && l == 0)
            break;
        else
            printf("%d\n", l + r);
    }

    return 0;
}