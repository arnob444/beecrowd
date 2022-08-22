#include <stdio.h>
int main()
{
    double a, b, c, m;
    double x, y;

    scanf("%lf%lf%lf", &a, &b, &c);
    m = (b * b) - (4 * (a) * (c));

    if (m > 0 && a != 0)
    {
        m = sqrt(m);
        x = (-b + m) / (2 * a);
        y = (-b - m) / (2 * a);
        printf("R1 = %.5lf\n", x);
        printf("R2 = %.5lf\n", y);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
