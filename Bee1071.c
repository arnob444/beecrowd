#include <stdio.h>
int main()
{
    int a, b, i, s = 0, temp;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    for (i = a + 1; i < b; i++)
    {
        if (i % 2 != 0)
         s = s + i;
    }

    // -4 -3 -2 -1 0 1 2 3 4 5   normal num
    // -3 -1 1 3 5    Odd num
    
    printf("%d\n", s);
    return 0;
}
