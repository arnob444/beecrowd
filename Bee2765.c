#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char ch[200];
    gets(ch);
    for (i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == ',')
            printf("\n");
        else
            printf("%c", ch[i]);
    }
    printf("\n");
}