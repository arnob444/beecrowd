#include <stdio.h>
int main()
{
    int i, j, a1[50], a2[50], a3[50];
    int cnt1 = 1, cnt2 = 0, n, m;
    // scanf("%d%d", &n, &m) && n != 0 && m != 0
    while (1)
    {
        scanf("%d%d", &n, &m);
        if (n == 0 && m == 0)
        {
            break;
        }
        for (i = 0; i < m; i++)
        {
            scanf("%d", &a1[i]);
        }
        for (i = 0; i < m; i++)
        {
            a2[i] = a1[i];
            a3[i] = 0;
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a1[i] == a2[j])
                {
                    a3[j] = cnt1;
                    cnt1++;
                }
            }
            cnt1 = 1;
        }
        for (i = 0; i < m - 1; i++)
        {
            if (a3[i] == 2)
            {
                cnt2++;
            }
        }
        printf("%d\n", cnt2);
    }
}

//#include <stdio.h>
// #include <string.h>
// int main()
// {

//     int n, m, i, j, array[10000];
//     while (scanf("%d%d", &n, &m) && n != 0 && m != 0)
//     {
//         int c = 0;
//         memset(array, 0, sizeof(array));

//         for (i = 0; i < m; i++)
//         {
//             scanf("%d", &j);
//             array[j]++;

//             if (array[j] == 2)
//                 c++;
//         }
//         printf("%d\n", c);
//     }
// }