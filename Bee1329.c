#include <stdio.h>
int main()
{
    int i, n;
    while (1)
    {
        int marry = 0, jhon = 0;
        scanf("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
        {
            int value;
            scanf("%d", &value);
            if (value == 0)
                marry++;
            else
                jhon++;
        }
        printf("Mary won %d times and John won %d times\n", marry, jhon);
    }
    return 0;
}