#include<stdio.h>
int main()
{
    int i,a,x,in=0,out=0;
    scanf("%d",&a);
    for(i = 1; i <= a; i++)
    {
        scanf("%d",&x);
        if(x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}
