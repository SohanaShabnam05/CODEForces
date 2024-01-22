#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ct(ll n)
{
    ll ct = 0;
    while (n)
    {
        ct += (n % 10);
        n = n / 10;
    }

    return ct;
}

ll gcd(ll &a, ll &b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }

    return res;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll p = ct(n);

        while (gcd(n, p) <= 1)
        {
            n++;
            p = ct(n);
        }

        cout << n << endl;
    }
    return 0;
}
