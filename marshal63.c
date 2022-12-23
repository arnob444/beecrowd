#include <stdio.h>
int main()
{
    int t, n, a, result;
    scanf("%d", &t);
    char x[2];
    for (int i = 1; i <= t; i++)
    {
        result = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%s", x);
            scanf("%d", &a);
            if (x[0] == '+')
            {
                result += a;
            }
            else if (x[0] == '-')
            {
                result -= a;
            }
        }
        printf("Case %d: %d\n", i, result + 1000);
    }
}