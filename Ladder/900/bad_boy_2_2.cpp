#include <bits/stdc++.h>
using namespace std;

// Think woisely if you have keep the balls a two corner then (1,1) and (n,m) it will cover maximum
// distance

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;

        if ((i == 1 && j == 1) || (i == n && j == m))
        {
            cout << 1 << " " << m << " ";
            cout << n << " " << 1 << " ";
        }
        else
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
    }
    return 0;
}