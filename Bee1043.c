#include <stdio.h>
int main()
{
    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    if (A < B+C && B < A+C && C < B+C)
    {
        printf("Perimetro = %.1f\n",A+B+C);
    }
    else
        printf("Area = %.1f\n",((A+B)*C) / 2);

    return 0;

}
