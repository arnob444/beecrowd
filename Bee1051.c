//4520 = 4520 - 2000 = 2520
//1000*.08+1500*.18+20*.28 = 355.60
#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if(n >= 0.00 && n <= 2000.00)
        printf("Isento\n");
    else if(n > 2000.01 && n <= 3000.00)
    {
        n = n - 2000;
        n = (n*8) / 100;
        printf("R$ %.2f\n",n);
    }else if(n > 3000.01 && n <= 4500.00)
    {
        n = n - 3000;
        n = (n*18) / 100;
        printf("R$ %.2f\n",n + 80);  //(1000 * .08) = 80
    }else if(n > 4500.00)
    {
        n = n - 4500;
        n = (n*28) / 100;
        printf("R$ %.2f\n",n + 350); // 80 + (1500 * .18) = 350
    }


    return 0;

}