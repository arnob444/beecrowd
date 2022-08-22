#include <stdio.h>
int main()
{
    int a, amount, r;
    double gas;
    scanf("%d%d", &r, &amount);
    a = (4 * 3.1415 * r * r * r) / 3;
    gas = amount / a;
    printf("%.0lf\n", gas);
}
