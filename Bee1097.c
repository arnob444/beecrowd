/*I=1 J=7=1+6=I+6
  I=1 J=6=1+5=I+5
  I=1 J=5=1+4=I+4
  I=3 J=9=3+6=I+6
  I=3 J=8=3+5=I+5
  I=3 J=7=3+4=I+4
  ...
  I=9 J=15=9+6=I+6
  I=9 J=14=9+5=I+5
  I=9 J=13=9+4=I+4 */

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i += 2)
    {
        for (j = i + 6; j >= i + 4; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}