#include <stdio.h>
int main()
{
  int x, y, m, n, o, p, q, k, r, pp, nn, mi, ai, aa;
  scanf("%d", &n);
  int a = 100, b = 50, c = 20, d = 10, e = 5, f = 2, g = 1;

  x = n / a;
  y = n % a;
  m = y / b;
  k = y % b;
  o = k / c;
  p = k % c;
  q = p / d;
  r = k % d;
  pp = r / e;
  b = r % e;
  nn = b / f;
  mi = b % f;
  aa = mi / g;
  ai = mi % g;

  printf("%d\n", n);
  printf("%d nota(s) de R$ %d,00\n", x, a);
  printf("%d nota(s) de R$ %d,00\n", m, b);
  printf("%d nota(s) de R$ %d,00\n", o, c);
  printf("%d nota(s) de R$ %d,00\n", q, d);
  printf("%d nota(s) de R$ %d,00\n", pp, e);
  printf("%d nota(s) de R$ %d,00\n", nn, f);
  printf("%d nota(s) de R$ %d,00\n", aa, g);

  return 0;
}
// #include <stdio.h>
// int main()
// {
//   int i, n;
//   int a[7] = {100, 50, 20, 10, 5, 2, 1};
//   int b[7];
//   scanf("%d", &n);
//   printf("%d\n", n);
//   for (i = 0; i < 7; i++)
//   {
//     b[i] = n / a[i];
//     n = n % a[i];
//   }
//   for (i = 0; i < 7; i++)
//   {
//     printf("%d nota(s) de R$ %d,00\n", b[i], a[i]);
//   }

//   return 0;
// }
