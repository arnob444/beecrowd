#include <stdio.h>
int main()
{
    int bill, pay;
    int num, count;
    while (1)
    {
        count = 0;
        scanf("%d %d", &bill, &pay);
        if (bill == 0 && pay == 0)
            break;
        else
        {
            num = (pay - bill);
            if ((num / 100) > 0)
            {
                count++;
                num -= 100;
            }
            if ((num / 50) > 0)
            {
                count++;
                num -= 50;
            }
            if ((num / 20) > 0)
            {
                count++;
                num -= 20;
            }
            if ((num / 10) > 0)
            {
                count++;
                num -= 10;
            }
            if ((num / 5) > 0)
            {
                count++;
                num -= 5;
            }
            if ((num / 2) > 0)
            {
                count++;
                num -= 2;
            }
            if (count == 2)
                printf("possible\n");
            else
                printf("impossible\n");
        }
    }
    return 0;
}
