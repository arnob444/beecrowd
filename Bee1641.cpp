#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, w, l, count = 1;
    while (scanf("%d", &r) && (r != 0))
    {
        scanf("%d%d", &w, &l);
        double diagonal = sqrt(w * w + l * l);
        if (2 * r >= diagonal)
        {
            printf("Pizza %d fits on the table.\n", count);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n", count);
        }
        count++;
    }
    return 0;
}