#include<stdio.h>
int main()
{
    int W,X,Y,Z,d1,d2,h1,h2,m1,m2,s1,s2,X1,X2,data;
    char a1[5],a2[5],c[5];

    scanf("%s %d %d %s %d %s %d",a1,&d1,&h1,c,&m1,c,&s1);
    scanf("%s %d %d %s %d %s %d",a2,&d2,&h2,c,&m2,c,&s2);

    X1 = s1 + m1 * 60 + h1 * 3600 + d1 * 24 * 3600;
    X2 = s2 + m2 * 60 + h2 * 3600 + d2 * 24 * 3600;

    data = X2 - X1;
    W = data/(24*3600);
    X = (data - W*24*3600)/3600;
    Y = (data - W*24*3600 - X*3600)/60;
    Z =  data - W*24*3600 - X*3600 - Y*60;

    printf("%d dia(s)\n",W);
    printf("%d hora(s)\n",X);
    printf("%d minuto(s)\n",Y);
    printf("%d segundo(s)\n",Z);


    return 0;
}
