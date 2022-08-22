#include <stdio.h>
int main()
{
    // int x = 25, y = 0, z;
    // z = x == y;
    int A = 10, B = 15, C = 5, D = 20;
    // A = (A * B) + (D / C) + (++C) - (--D);
    // B += A & B | (C * A * D) / B && C;
    // C *= A | B || C && D & A;
    A = A + B * C / D % C + (++B) + (++A) * B;
    // D = A + B == C >= D && B;
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    // printf("%d", z);
}