#include <stdio.h>
int main()
{
    double l[12][12], sum = 0;
    char ch;
    int n;
    scanf("%d %c", &n, &ch);
    for (int r = 0; r < 12; r++)
    {
        for (int c = 0; c < 12; c++)
        {
            scanf("%lf", &l[r][c]);
        }
    }
    for (int c = 0; c < 12; c++)
    {
        sum += l[n][c];
    }
    if (ch == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (ch == 'M')
    {
        printf("%.1lf\n", (sum / 12.0));
    }
    return 0;
}