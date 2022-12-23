#include <stdio.h>

int main()
{
    int n, k, c;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        for (int j = 1; j <= k; j++)
        {
            scanf("%d", &c);
            if (c == 1)
                printf("Rolien\n");
            else if (c == 2)
                printf("Naej\n");
            else if (c == 3)
                printf("Elehcim\n");
            else if (c == 4)
                printf("Odranoel\n");
        }
    }
    return 0;
}