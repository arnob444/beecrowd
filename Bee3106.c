#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], total = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total = total + a[i] / 3;
    }
    printf("%d\n", total * 3);

    return 0;
}
//    16 5 26 26 19
