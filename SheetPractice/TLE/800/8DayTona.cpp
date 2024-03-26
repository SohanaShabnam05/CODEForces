#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        /*

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }

        int maxi = INT_MIN;

        for (auto a : mp)
        {
            maxi = max(maxi, a.second);
        }

        for (auto a : mp)
        {
            if (a.second == maxi)
            {
                if (a.first == k)
                {
                    cout << "YES" << endl;
                }
            }
            cout << "NO" << endl;
        }

        */
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == k)
            {
                count++;
            }
        }

        if (count > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}