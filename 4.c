#include <stdio.h>
int main()
{

    char a = '1';      // ASCII value of '0' = 48
    while (a < 58)
    {
        int b = a++;
        printf("a \"%c\" & b \"%05d\"\n", b, a);
        if (a == '5')
            break;
    }
    return 0;
}