#include <stdio.h>
int main()
{
    int n, k, code;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        for (int j = 1; j <= k; j++)
        {
            scanf("%d", &code);
            if (code == 1)
                printf("Rolien\n");
            else if (code == 2)
                printf("Naej\n");
            else if (code == 3)
                printf("Elehcim\n");
            else if (code == 4)
                printf("Odranoel\n");
        }
    }
    return 0;
}