#include <stdio.h>

void res(int arr[], int n)
{
    if (n <= 0)
        return;

    printf("%d %d\n", arr[0], arr[n - 1]);
    res(arr + 1, n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    res(arr, n);
    return 0;
}
  //problem