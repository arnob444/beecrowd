#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (( b + c > a) && (a + c > b) && ( b + a > c))
    {
        if (a == b && b == c)
            printf("Valido-Equilatero\n");
        else if (a == b || b == c || a == c)
            printf("Valido-Isoceles\n");
        else
            printf("Valido-Escaleno\n");
        if (((a * a) == (b * b) + (c * c)) || ((b * b) == (a * a) + (c * c)) || ((c * c) == (b * b) + (a * a)))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");
    return 0;
}
// scalene = বিষমবাহু ত্রিভুজ = Valido-Isoceles
// isoceles = সমদ্বিবাহু ত্রিভুজ = Valido-Equilatero
// equilateral = সমবাহু ত্রিভুজ = Valido-Escaleno
