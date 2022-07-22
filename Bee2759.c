#include<stdio.h>
int main()
{
    char A, B, C;
    scanf(" %c", &A);
    scanf(" %c", &B);
    scanf(" %c", &C);
    printf("A = %c, B = %c, C = %c\nA = %c, B = %c, C = %c\nA = %c, B = %c, C = %c\n", A, B, C, B, C, A, C, A, B);
    return 0;
}
