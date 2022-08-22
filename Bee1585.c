#include <stdio.h>
int main ()
{
    int n, x1, x2;
    scanf("%d", &n);
    for(int i = 1;i <= n;i++)
    {
        scanf("%d %d", &x1, &x2);
        printf("%d cm2\n", (x1*x2)/2);
    }
}
