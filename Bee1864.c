#include <stdio.h>
int main()
{
    int a, i;
    char ar[40] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        printf("%c", ar[i]);
    }
    printf("\n");
    return 0;
}
