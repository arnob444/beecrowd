#include <stdio.h>
int main()
{
    int x, y;
    float n, sum = 0.00;
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &x, &y);
        if (x == 1001)
        {
            sum += 1.50 * y;
        }
        else if (x == 1002)
        {
            sum += 2.50 * y;
        }
        else if (x == 1003)
        {
            sum += 3.50 * y;
        }
        else if (x == 1004)
        {
            sum += 4.50 * y;
        }
        else if (x == 1005)
        {
            sum += 5.50 * y;
        }
    }
    printf("%.2f\n", sum);
    return 0;
}