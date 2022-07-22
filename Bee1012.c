#include<stdio.h>
int main()
{
    float A, B, C;
    double tri, cir, tra, r, pi, s;
    scanf("%f %f %f", &A, &B, &C);
    pi = 3.14159;
    tri = .5 * A * C;
    cir = pi * C * C;
    tra = (A + B) / 2 * C;
    s = B * B;
    r = A * B;
    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n",cir);
    printf("TRAPEZIO: %.3f\n", tra);
    printf("QUADRADO: %.3f\n", s);
    printf("RETANGULO: %.3f\n",r);


    return 0;
}
