#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b > d)
        {
            cout << -1 << endl;
        }

        else
        {
            ll dis = d - b;
            if (a < c - dis)
            {
                cout << -1 << endl;
            }
            else
            {
                ll ans = a - (c - dis) + dis;
                cout << ans;
                cout << endl;
            }
        }
    }
    return 0;
}