#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, n;
        cin >> x >> n;

        long long i = 1;
        while (i < n)
        {
            if (x % 2 == 0)
            {
                x = x - i;
                i++;
            }
            else
            {
                x = x + i;
                i++;
            }
        }

        cout << x << endl;
    }
    return 0;
}