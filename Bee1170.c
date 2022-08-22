#include <stdio.h>
int main()
{
    int day,i,n;
    float x;
    scanf("%d",&n);
    for(i = 0; i < n ; i++)
    {
        scanf("%f",&x);
        day = 0;
        while( x > 1 )
        {
            x = x / 2;
            day ++;
        }
        printf("%d dias\n",day);
    }
    return 0;
}
