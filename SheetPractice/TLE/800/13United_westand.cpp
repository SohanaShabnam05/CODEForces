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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b, c;

        sort(a.begin(), a.end(), greater<int>());
        int maxi = a[0];

        /*
        for (int i = 1; i < n; i++)
        {
            bool added = false;
            for (int j = 0; j < b.size(); j++)
            {
                if (a[i] % b[j] == 0)
                {
                    c.push_back(a[i]);
                    added = true;
                    break;
                }
            }
            if (!added)
            {
                b.push_back(a[i]);
            }
        }

        */

        for (int i = 0; i < n; i++)
        {
            if (a[i] == maxi)
            {
                c.push_back(a[i]);
            }
            else
            {
                b.push_back(a[i]);
            }
        }

        if (c.empty() || b.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (int i : b)
            {
                cout << i << " ";
            }

            cout << endl;

            for (int i : c)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
