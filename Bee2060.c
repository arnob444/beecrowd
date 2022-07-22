#include<stdio.h>
int main()
{
    int a,i,x,c1 = 0,c2 = 0,c3 = 0,c4 = 0;
    scanf("%d",&x);
    for(i = 0; i < x; i++)
    {
        scanf("%d",&a);
        if(a % 2 == 0)c1++;
        if(a % 3 == 0)c2++;
        if(a % 4 == 0)c3++;
        if(a % 5 == 0)c4++;
    }
    printf("%d Multiplo(s) de 2\n",c1);
    printf("%d Multiplo(s) de 3\n",c2);
    printf("%d Multiplo(s) de 4\n",c3);
    printf("%d Multiplo(s) de 5\n",c4);

    return  0;
}
