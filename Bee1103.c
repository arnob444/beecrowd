#include <stdio.h>
int main()
{
    int h1, m1, h2, m2, s1, s2;
    while (1)
    {
        scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        s1 = (h1 * 60) + m1;
        s2 = (h2 * 60) + m2;

        if (s2 < s1)
        {
            s2 = s2 + (24 * 60);
        }
        printf("%d\n", s2 - s1);
    }

    return 0;
}