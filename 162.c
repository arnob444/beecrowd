// n term fibonacci sequence
// fib(n) = fib(n-1) + fib(n-2)
#include <stdio.h>
int fib(int n);
int main()
{
    printf("%d\n", fib(6));
    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}