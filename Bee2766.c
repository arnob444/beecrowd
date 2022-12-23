#include <stdio.h>
int main()
{
    char s[31];
    for (int i = 1; i <= 10; i++)
    {
        scanf("%s", s);
        if (i == 3)
            printf("%s\n", s);
        else if (i == 7)
            printf("%s\n", s);
        else if (i == 9)
            printf("%s\n", s);
    }
    return 0;
}