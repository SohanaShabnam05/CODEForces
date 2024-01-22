#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (n == m)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        ll diff = abs(n - m);

        ll x = n % diff;
        ll y = m % diff;

        if (x != y)
            cout << 0 << " " << 0 << endl;
        else
        {
            ll ans = min(diff - x, y);
            cout << diff << " " << ans << endl;
        }
    }
    return 0;
}