#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        if (mp.size() == 1)
            cout << "Yes\n";
        else if (mp.size() >= 3)
            cout << "No\n";
        else
        {
            vector<int> vec;
            for (auto it : mp)
            {
                vec.push_back(it.second);
            }

            int diff = abs(vec[0] - vec[1]);
            if (diff <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}