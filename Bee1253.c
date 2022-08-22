#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        char x[51];
        int right_shift;
        scanf("%s", x);
        scanf("%d", &right_shift);
        int j, lenght = strlen(x);
        for (j = 0; j < lenght; j++)
        {
            char c = x[j] - right_shift;
            if(c < 65)
            {
                c = c + 26;
            }
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}