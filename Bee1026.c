#include<stdio.h>
int main()
{
    int unsigned long a, b;
    while(scanf("%lu%lu",&a,&b) != EOF)
    {
        printf("%lu\n", a ^ b);
    }
    return 0;
}
// A!.B + A.B! 
// find A xor B
// 0 0 = 0
// 0 1 = 1
// 1 0 = 1
// 1 1 = 0