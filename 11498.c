// #include <stdio.h>
// int main()
// {
//     int i, k, n, m, x, y;
//     while (1)
//     {
//         scanf("%d", &k);
//         if (k == 0)
//             break;
//         scanf("%d%d", &n, &m);
//         for (i = 1; i <= k; i++)
//         {
//             scanf("%d%d", &x, &y);
//             if (x == n || y == m)
//             {
//                 printf("divisa\n");
//             }
//             else if (x > n && y > m)
//             {
//                 printf("NE\n");
//             }
//             else if (x < n && y > m)
//             {
//                 printf("NO\n");
//             }
//             else if (x < n && y < m)
//             {
//                 printf("SO\n");
//             }
//             else if (x > n && y < m)
//             {
//                 printf("SE\n");
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int k, n, m, x, y;
    while(1)
    {
        scanf("%d", &k);
        if(k == 0)
            break;
        scanf("%d%d", &n, &m);
        for (int i = 0; i < k; i++)
        {
            scanf("%d%d", &x, &y);
            if(x == n || y == m)
                printf("divisa\n");
                else if(x > n && y > m)
                printf("NE\n");
                else if(x < n && y > m)
                printf("NO\n");
                else if(x < n && y < m)
                printf("SO\n");
                else if(x > n && y < m)
                printf("SE\n");

        }
    }
    return 0;
}