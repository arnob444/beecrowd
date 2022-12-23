#include <stdio.h>
#include <string.h>

int main()
{
    int n, length;
    char name[10001];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", name);
        length = strlen(name);
        printf("%.2lf\n", length * .01);
    }
    return 0;
}