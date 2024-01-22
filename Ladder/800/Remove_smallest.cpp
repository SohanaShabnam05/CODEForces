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

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        sort(v.begin(), v.end());

        for (int i = n - 1; i >= 1; i--)
        {
            if (abs(v[i] - v[i - 1]) <= 1)
            {
                v.pop_back();
            }
            else
            {
                break;
            }
        }

        if (v.size() == 1)
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
