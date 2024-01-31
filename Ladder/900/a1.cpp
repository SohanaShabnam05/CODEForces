#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int m1 = 0;

        if (m % 2 == 1)
        {
            m1 = m - 1;
        }
        else
        {
            m1 = m;
        }

        cout << n * m1 / 2 << endl;
    }
    return 0;
}