#include<stdio.h>
int main()
{
    int a;
    float b,c,s;
    scanf("%d %f %f",&a,&b,&c);
    s = b * c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2f\n",s);

    return 0;
}
