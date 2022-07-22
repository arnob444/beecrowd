#include<stdio.h>
int main()
{
    int N,A,B;
    int score1,score2;
    while(1 == scanf("%d",&N))
    {
        if(0 == N)
            break;
        score1 = score2 = 0;
        while(N--)
        {
            scanf("%d %d",&A,&B);
            if(A > B)
                score1++;
            else if(B > A)
                score2++;
        }
        printf("%d %d\n",score1,score2);
    }
    return 0;
}
