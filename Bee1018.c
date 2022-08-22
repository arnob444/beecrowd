// #include <stdio.h>
// int main()
// {
//   int n, x, y, m, n, o, p, q;
//   scanf("%d", &n);
//   int a = 100, b = 50, c = 20, d = 10, e = 5, f = 2, g = 1;

//   x = n % a;
//   y = x % b;
//   m = y % c;
//   n = m % d;
//   o = n % e;
//   p = o % f;
//   q = p % g;
//   printf("%d\n", n);
//   printf("%d nota(s) de R$ %d,00\n", x, a);
//   printf("%d nota(s) de R$ %d,00\n", y, b);
//   printf("%d nota(s) de R$ %d,00\n", m, c);
//   printf("%d nota(s) de R$ %d,00\n", n, d);
//   printf("%d nota(s) de R$ %d,00\n", o, e);
//   printf("%d nota(s) de R$ %d,00\n", p, f);
//   printf("%d nota(s) de R$ %d,00\n", q, g);

//   return 0;
// }
#include <stdio.h>
int main()
{
  int i, n;
  int a[7] = {100, 50, 20, 10, 5, 2, 1};
  int b[7];
  scanf("%d", &n);
  printf("%d\n", n);
  for (i = 0; i < 7; i++)
  {
    b[i] = n / a[i];
    n = n % a[i];
  }
  for (i = 0; i < 7; i++)
  {
    printf("%d nota(s) de R$ %d,00\n", b[i], a[i]);
  }

  return 0;
}
