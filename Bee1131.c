#include <stdio.h>
int main()
{
    int a, b, c, match = 0, inter = 0, gremio = 0, draw = 0;
    while (1)
    {
        scanf("%d%d", &a, &b);
        printf("Novo grenal (1-sim 2-nao)\n");
        match++;
        if (a > b)
        {
            inter++;
        }
        else if (b > a)
        {
            gremio++;
        }
        else if (a == b)
        {
            draw++;
        }
        scanf("%d", &c);
        if (c == 1)
            continue;
        else
            break;
    }
    printf("%d grenais\n", match);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draw);

    if (inter > gremio)
        printf("Inter venceu mais\n");
    else if (gremio > inter)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");

    return 0;
}