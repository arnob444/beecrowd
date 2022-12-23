#include <stdio.h>
int main()
{
    int a, b, range;
    char c;
    scanf("%d", &range);
    scanf("%d%c%d", &a, &c, &b);
    if (c == '+')
        if (a + b <= range)
            printf("OK\n");
        else
            printf("OVERFLOW\n");
    else if (a * b <= range)
        printf("OK\n");
    else
        printf("OVERFLOW\n");
    return 0;
}
