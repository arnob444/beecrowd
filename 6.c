#include <stdio.h>
int main()
{
    int k, d, p;
    scanf("%d%d%d", &k, &d, &p);

    if (k < d && k < p)
        printf("Karma\n");
    else if (d < k && d < p)
        printf("Dharma\n");
    else if (p < k && p < d)
        printf("Parma\n");
    else
        printf("The Shop Owner\n");
        

    return 0;
}