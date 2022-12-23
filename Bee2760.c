#include <stdio.h>
int main()
{
    char a[100], b[100], c[100];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    printf("%s%s%s\n", a, b, c);

    return 0;
}
//  problem