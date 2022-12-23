#include <stdio.h>

int count;
int fibo(int n)
{
    count++;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fiboNm1 = fibo(n - 1);
    int fiboNm2 = fibo(n - 2);
    int fiboN = fiboNm1 + fiboNm2;
    return fiboN;
}

int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        count = 0;
        printf("fib(%d) = %d calls = %d\n", x, count - 1, fibo(x));
    }
    return 0;
}