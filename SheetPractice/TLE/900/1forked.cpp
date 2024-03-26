#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<ll> dx = {-a, -a, a, a, b, b, -b, -b};
        vector<ll> dy = {-b, b, b, -b, a, -a, a, -a};

        set<pair<ll, ll>> stk;
        set<pair<ll, ll>> stq;

        for (int i = 0; i < 8; i++)
        {
            stk.insert({xk + dx[i], yk + dy[i]});
        }

        for (int i = 0; i < 8; i++)
        {
            stq.insert({xq + dx[i], yq + dy[i]});
        }

        int ans = 0;

        for (auto i : stk)
        {
            if (stq.find(i) != stq.end())
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}