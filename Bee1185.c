#include <stdio.h>
int main()
{
    double l[12][12], sum = 0;
    char ch;
    int n = 10;
    scanf("%c", &ch);
    for (int r = 0; r < 12; r++)
    {
        for (int c = 0; c < 12; c++)
        {
            scanf("%lf", &l[r][c]);
        }
    }
    for (int r = 0; r < 11; r++)
    {
        for (int c = 0; c <= n; c++)
        {
            sum += l[r][c];
        }
        n--;
    }
    if (ch == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (ch == 'M')
    {
        printf("%.1lf\n", (sum / 66.0));
    }
    return 0;
}