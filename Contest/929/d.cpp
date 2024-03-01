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

        map<int, int> mp;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        for (int i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
        }

        if (mp.begin()->second == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        vector<int> ans;

        for (auto a : mp)
        {
            ans.push_back(a.first);
        }

        if (ans.size() == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        bool f = true;

        for (int i = 1; i < ans.size(); i++)
        {
            if (ans[i] % ans[0] != 0)
            {
                cout << "YES" << endl;
                f = false;
                break;
            }
        }

        if (f)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}