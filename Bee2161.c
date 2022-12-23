#include <stdio.h>
int main()
{
    double n, result = 0.0;
    scanf("%lf", &n);

    while (n--)
    {
        result += 6.0;
        result = 1.0 / result;
    }
    
    result += 3.0;
    printf("%.10lf\n", result);
    return 0;
}