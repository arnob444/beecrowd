#include <stdio.h>
int main()
{
    int j = 0;
    float n, arr[2], avg;
    while (1)
    {
        scanf("%f", &n);
        if (n >= 0 && n <= 10)
        {
            arr[j] = n;
            j++;
        }
        else
            printf("nota invalida\n");
        if (j > 1)
            break;
    }
    avg = (arr[0] + arr[1]) / 2;
    printf("media = %.2f\n", avg);

    return 0;
}
