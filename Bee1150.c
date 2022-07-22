/*3
3+1=4
7+1=8            total value : 5
11+1=12
15+1=16
19+1=20*/
#include<stdio.h>
int main()

{
    int x,z,counter = 1,sum = 0,i;
    scanf("%d %d",&x,&z);
    while(x > z)
    {
        scanf("%d",&z);
    }
    for(i = x ; i <= z ; i++)
    {
        sum = sum + i;
        if(sum > z)
            break;
        counter++;
    }
    printf("%d\n",counter);

    return 0;

}
