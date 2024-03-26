#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        if (k > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (sorted(v))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}