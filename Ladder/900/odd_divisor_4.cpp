#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        /* Simple logic
        Even = 2,4,8,16 (mane jara 2 er power)
        ODD = 6,10,12,18 (mane jara e er power noi)
        */

        if ((n & (n - 1)) == 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}
