#include <stdio.h>
int main()
{
    int n, x;
    char a[25001];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        scanf("%d", &x);

        if (a[0] == 'T' && a[1] == 'h' && a[2] == 'o' && a[3] == 'r')
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}