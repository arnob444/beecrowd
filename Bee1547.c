#include <stdio.h>
int main()
{
    int x, QT, s, i, j, tmp, count;
    int num[10] = {0};

    scanf("%d", &x);
    while (x--)
    {
        scanf("%d %d", &QT, &s);
        count = 0;
        tmp = 0;

        for (i = 0; i < QT; i++)
        {
            scanf("%d", &tmp);

            if (s > tmp)
            {
                num[i] = s - tmp;
            }
            else
            {
                num[i] = tmp - s;
            }
        }
        tmp = num[0];
        for (j = 0; j < QT; j++)
        {

            if (num[j] == 0)
            {
                count = j;
                break;
            }
            else if (tmp > num[j])
            {
                tmp = num[j];
                count = j;
            }
        }
        printf("%d\n", count + 1);
    } 
    return 0;
}
