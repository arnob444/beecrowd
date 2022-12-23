#include <stdio.h>
int main()
{
    int n, N;
    int a[12];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &N);
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &a[j]);
        }
        printf("Case %d: %d\n", i, a[N / 2 + 1]);
    }
    return 0;
}

// here 5 is test case.