#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, s;
    scanf("%d", &num);
    printf("1");
    for (i = 1; i < num; i++)
    {
        s = pow(num, i);
        printf(" + %d", s);
    }
}
