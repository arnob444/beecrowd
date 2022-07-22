#include<stdio.h>
int main()
{
    int row,col,n,z;
    while(scanf("%d",&n) != EOF)
    {
        for(row = 1; row <= n; row += 2)
        {
            for(col = 1; col <= (n - row) / 2; col++)
                printf(" ");
            for(z = row; z > 0 ; z--)
                printf("*");
            printf("\n");
        }
        for(row = 1 ; row <= n/2; row++)
            printf(" ");
        printf("*\n");
        for(row = 2; row <= n/2 ; row++)
            printf(" ");
        printf("***\n\n");
    }
    return 0;
}
