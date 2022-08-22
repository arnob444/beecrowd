/* rabbit  = 10 + 5 + 9 + 5 = 29
   rat = 6 + 14 + 6 + 14 = 40
   frog = 15 + 8 = 23   */
#include <stdio.h>
int main()
{
    int n, x, i, rat = 0, rabbit = 0, frog = 0, total = 0;
    char v;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %c", &x, &v);
        if (v == 'C')
            rabbit += x;
        if (v == 'R')
            rat += x;
        if (v == 'S')
            frog += x;
    }
    total = rabbit + rat + frog;
    double rabbit_P = (rabbit * 100.00) / total;
    double rat_P = (rat * 100.00) / total;
    double frog_P = (frog * 100.00) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2lf %%\n", rabbit_P);
    printf("Percentual de ratos: %.2lf %%\n", rat_P);
    printf("Percentual de sapos: %.2lf %%\n", frog_P);

    return 0;
}
