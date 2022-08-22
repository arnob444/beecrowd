#include <stdio.h>
int main()
{
    float n, x, lowest;
    while (scanf("%f", &n) != EOF)
    {
        lowest = 11.1F; // Implicit Type Casting
        for (int i = 1; i <= n; i++)
        {
            scanf("%f", &x);
            if (lowest > x)
            {
                lowest = x;
            }
        }
        printf("%.2f\n", lowest);
    }
    return 0;
}
// We use it to convert the data type of any variable without losing the actual meaning that it holds.