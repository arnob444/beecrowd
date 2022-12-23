#include <stdio.h>

int main()
{
    float a, b, c, d, e, M, F;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    M = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
    printf("Media: %.1f\n", M);
    if (M < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (M >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);
        F = (M + e) / 2;
        if (F >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", F);
    }

    return 0;
}
