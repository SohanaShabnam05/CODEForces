#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ans = n / 3;
        if (3 * (n / 3) == n)
        {
            cout << ans << " " << ans << endl;
        }
        if (((2 * ans) + (ans + 1)) == n)
        {
            cout << ans + 1 << " " << ans << endl;
        }
        if (((ans) + (2 * (ans + 1))) == n)
        {
            cout << ans << " " << ans + 1 << endl;
        }
    }
    return 0;
}