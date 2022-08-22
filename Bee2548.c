#include <stdio.h>
int main()
{
    int i = 0, m = 0, n = 0, result = 0, value = 0;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        result = 0;
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &value);
            if (i > (n - m))
            {
                result = result + value;
            }
        }
        printf("%d\n", result);
    }
}

