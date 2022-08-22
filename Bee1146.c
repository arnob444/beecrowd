#include <stdio.h>
int main()
{
    int i, j;
    while (1)
    {
        scanf("%d", &j);
        if (j == 0)
            break;
        printf("1");
        for (i = 2; i <= j; i++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}