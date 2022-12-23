#include <stdio.h>
int main()
{
    int x, count = 1, y, min;
    scanf("%d", &x);
    scanf("%d", &y);
    min = y;
    for (int i = 1; i < x; i++)
    {
        scanf("%d", &y);
        if (min > y)     // 8 > 0
                        // min = 0
        {
            min = y;
            count = i + 1;
        }
    }
    printf("%d", count);
    return 0;
}


