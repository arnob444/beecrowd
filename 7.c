#include <stdio.h>
int main()
{
    int a[20], i, n, rich, cheap;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    rich = cheap = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > rich)
            rich = a[i];
        if (a[i] < cheap)
            cheap = a[i];
    }
    printf("Cheapest Book price is %d Taka\n", cheap);
    printf("Most Costly Book price is %d Taka\n", rich);
    return 0;
}

