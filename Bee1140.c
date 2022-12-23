#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int lnth, i, j, cndtn = 1;
    char a[2];
    while (1)
    {
        gets(str);
        if (str[0] == '*')
            break;
        else
        {
            lnth = strlen(str);
            if (str[0] >= 65 && str[0] <= 90)
                a[0] = str[0] + 32;
            else if (str[0] >= 97 && str[0] <= 122)
                a[0] = str[0] - 32;
            for (i = 1; i < lnth; i++)
            {
                if (str[i] == ' ')
                {
                    if (str[i + 1] == str[0] || str[i + 1] == a[0])
                        continue;
                    else
                    {
                        cndtn = 0;
                        break;
                    }
                }
            }
            if (cndtn == 1)
                printf("Y\n");
            else
                printf("N\n");
        }
    }
    return 0;
}
// problem
