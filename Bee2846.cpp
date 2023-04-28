#include <stdio.h>
#include <stdbool.h>

int main()
{
    int k;
    scanf("%d", &k);

    bool is_fib[3 * k];
    for (int i = 0; i < 3 * k; i++)
    {
        is_fib[i] = false;
    }
    is_fib[1] = true;
    is_fib[2] = true;

    // Precompute the Fibonacci numbers up to 3*k
    int fib1 = 1, fib2 = 1;
    for (int i = 3; i <= 3 * k; i++)
    {
        int fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        if (fib <= 3 * k)
        {
            is_fib[fib] = true;
        }
    }

    // Find the k-th Fibonot number
    int fibnot = 0, count = 0;
    for (int i = 1; count < k; i++)
    {
        if (!is_fib[i])
        {
            count++;
            fibnot = i;
        }
    }

    printf("%d\n", fibnot);

    return 0;
}
