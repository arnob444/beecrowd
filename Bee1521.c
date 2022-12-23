#include <stdio.h>
int main()
{
    int i, n, arr[55];
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        for (i = 1; i <= n; ++i)
            scanf("%d", &arr[i]);
        scanf("%d", &i);

        while (arr[i] != i)
            i = arr[i];

        printf("%d\n", i);
    }
}
// problem