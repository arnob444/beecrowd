#include<stdio.h>

int main()

{

    int i,j;

    while(1)
    {

        scanf("%d", &j);

        if(j == 0)break;

        for(i = 1; i <= j; i++)
        {

            printf("%d ",i);

        }
        printf("\n");

    }

    return 0;

}
