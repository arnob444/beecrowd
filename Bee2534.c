#include <stdio.h>
int main()
{
    int n[100];
    int q;
    int N, Q;
    while (scanf("%d%d", &N, &Q) != EOF)
    {
        for (int i = 0; i < N; i++)
            scanf("%d", &n[i]);

        for (int i = 0; i < Q; i++)
        {
            scanf("%d", &q);
            printf("%d\n", n[q - 1]);
        }
    }
    return 0;
}