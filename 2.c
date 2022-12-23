// #include <stdio.h>
// int main()
// {
//     int π = 3.14;
//     printf("%d", π);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     const float pi = 3.14;
//     pi = 3.14;
//     printf("%d", pi);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0, b = 1, c = 2, d;
//     d = ++a || b++ && c++ && a++;
//     printf("%d %d %d %d", a, b, c, d);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 100;
//     float c = 10.5, d = 100.5;
//     printf("++a = %d\n", ++a);
//     printf("--b = %d\n", --b);
//     printf("++c = %f\n", ++c);
//     printf("--d = %f\n", --d);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x, y, z;
//     x = 9 > 8 > 7;
//     y = 9 > 8 > 0;
//     z = 9 > 8 > 1;
//     printf("%d %d %d", x, y, z);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 2, b = 1, c = 0;
//     c = a++ + b;
//     printf("%d %d %d", a, b, c);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x;
//     scanf("%d", &x);
//     if (x > 0)
//         printf("%d is a positive number\n", x);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     a = (2 > 5) ?: 8;
//     printf("%d", a);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = -3, j = 2, k = 0, m;
//     m = ++i && ++j && ++k;
//     printf("%d %d %d %d\n", i, j, k, m);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 2, b = 9, c = 8, d = 7, e = 6;
//     d += a & b && b | a - d + a && b | b || a;
//     d += c + (++b / a) * e % 8 - d / 3;
//     e *= e != b ? (c * d) / e : (e * d) % a;

//     printf("%d\n", a);
//     printf("%d\n", b);
//     printf("%d\n", c);
//     printf("%d\n", d);
//     printf("%d\n", e);
// }

// #include<stdio.h>
// int main()
// {
//     int a = 12, b = 5;
//     int c = b / a;
//     printf("%d\n", c);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 15, c = 5, d = 20;
//     a = a * b + d / c++ + c-- - d;
//     printf("%d\n", a);
//     printf("%d\n", b);
//     printf("%d\n", c);
//     printf("%d\n", d);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 191, b = 92, c = 892, d = 2,g;

//     d += a & b && b | a - d + a && b || a;
//     g = a + b * c / d - (d++) % d - d * (b--);

//     printf("%d\n", g);
// }

// #include<stdio.h>
// int main()
// {
//     int a = 8, b = 12;

//     b = a + b;
//     printf("\n1.--A = %d", --a); //7
//     printf("\n2.A-- = %d", a--); //7
//     printf("\n3.B-- = %d", b--); //20
//     printf("\n4.B++ = %d", b++); //19
//     printf("\n5.++A = %d", ++a); //7
//     printf("\n6.++B = %d", ++b); //21

//     return 0;
//}

// #include <stdio.h>
// int main()
// {
//     int a = 1, b = 1, d = 1;
//     printf("%d, %d, %d", (++a) + (++a) + (a++), (a++) + (++b), (++d) + (d++) + (a++));
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0, b;
//     b = (++a + a++);
//     printf("%d\n", b);

//     return 0;
// }