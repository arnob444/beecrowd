//EOF use for read unlimited data
#include<stdio.h>
int  main()
{
    int i,m,n,k,l;
    while(scanf("%d",&n) != EOF)
    {
        l = 20;
        for( i = 0; i < n;i++)
        {
            scanf("%d",&m);
            if (m < 1)
            {
                l = m;
                k = i + 1;
            }
        }
        printf("%d",k);
        k = 0;
    }


    return 0;
}
