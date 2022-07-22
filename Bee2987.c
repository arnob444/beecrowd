// ASCII value of uppercase alphabets : 65 to 90.
// ASCII value of lowercase alphabets : 97 to 122.
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int i,j;
    for(i=1,j=65;i<26;i++,j++)
    {
        if(ch == j)
        {
            break;
        }


    }
    printf("%d\n",i);


    return 0;
}
