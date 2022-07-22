#include<stdio.h>
int main()
{
    long long int i,j,n,x;
    long long int a1,a2,sum;
    a1 = a2 = 1;
    while(scanf("%lld %lld",&n,&x) != EOF)
    {
        for( i = 1; i <= n ; i++)
        {
            a1 = a1 * i;
        }
        for( j = 1 ; j <= x ; j++)
        {
            a2 = a2 * j;
        }
        sum = a1 + a2;
        printf("%lld\n",sum);
        a1 = a2 = 1;
    }
    return 0;
}
