#include <stdio.h>
int main()
{
    while (1)
    {
        int n, count = 0;
        scanf("%d", &n);
        if (n == 0)
            break;

        int i, arr[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1] || arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            {
                count++;
            }
        }
        if (arr[0] > arr[n - 1] && arr[0] > arr[1] || arr[0] < arr[n - 1] && arr[0] < arr[1])
        {
            count++;
        }
        if (arr[n - 1] > arr[n - 2] && arr[n - 1] > arr[0] || arr[n - 1] < arr[n - 2] && arr[n - 1] < arr[0])
        {
            count++;
        }
        printf("%d\n", count);
    }
}
