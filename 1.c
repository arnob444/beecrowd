#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, m, n, array[10000];
    while (scanf("%d%d", &n, &m) && n != 0 && m != 0)
    {
        memset(array, 0, sizeof(array));
        int c = 0;
        for (i = 0; i < m; i++)
        {
            scanf("%d", &j);
            array[j]++;
            if (array[j] == 2)
                c++;
        }
        printf("%d\n", c);
    }
}