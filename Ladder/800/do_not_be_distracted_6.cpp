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
        string s;

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s += c;
        }

        unordered_map<char, int> mp;
        int ct = 0;

        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                ct++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        vector<int> cnt;

        for (auto i : mp)
        {
            cnt.push_back(i.first);
        }

        if (cnt.size() == ct + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}