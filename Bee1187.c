#include <stdio.h>
int main()
{
    double l[12][12], sum = 0;
    char ch;
    int n = 1, m = 11;
    scanf("%c", &ch);
    for (int r = 0; r < 12; r++)
    {
        for (int c = 0; c < 12; c++)
        {
            scanf("%lf", &l[r][c]);
        }
    }
    for (int r = 0; r < 5; r++)
    {
        for (int c = n; c < m; c++)
        {
            sum += l[r][c];
        }
        n++;
        m--;
    }
    if (ch == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (ch == 'M')
    {
        printf("%.1lf\n", (sum / 30.0));
    }
    return 0;
}