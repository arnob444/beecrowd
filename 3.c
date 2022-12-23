#include <stdio.h>
int main(void)
{
    char a = '9';
    do
    {
        float b = a++;
        printf("The value of a =  %c  and b= %010d\n," b, a);
    } 
    while ((a++) < 48);

    return 100;
}