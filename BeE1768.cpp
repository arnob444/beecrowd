#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int x = n / 2 + 1;
        for (int r = 1; r <= x; r++)
        {
            // printing space
            for (int c = r; c <= n / 2; c++)
                cout << " ";
            int p = 2 * r - 1;
            for (int c = 1; c <= p; c++)
                cout << "*";
            cout << endl;
        }
        int count = 1;
        while (count <= 2)
        {
            for (int c = count; c <= n / 2; c++)
                cout << " ";
            int p = 2 * count - 1;
            for (int c = 1; c <= p; c++)
                cout << "*";
            cout << endl;
            count++;
        }
        cout << endl;
    }
    return 0;
}