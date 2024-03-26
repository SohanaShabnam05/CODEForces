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

        string s, x;
        cin >> s >> x;

        bool ok = false;
        for (int i = 0; i < 10; i++)
        {
            if (s.find(x) != -1)
            {
                ok = true;
                cout << i << endl;
                break;
            }

            s += s;
        }
        if (ok == false)
            cout << -1 << endl;
    }
}