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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i]--;
        }

        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            if (v[i] != i)
            {
                ok = false;
            }
        }

        if (ok == true)
        {
            cout << 0 << "\n";
            continue;
        }

        if (v[0] == 0 || v[n - 1] == n - 1)
        {
            cout << 1 << endl;
        }
        else if (v[0] == n - 1 && v[n - 1] == 0)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}