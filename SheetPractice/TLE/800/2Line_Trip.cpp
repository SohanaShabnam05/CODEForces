#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        for (int i = 1; i < n; i++)
        {
            int diff = v[i] - v[i - 1];
            maxi = max(maxi, diff);
        }

        maxi = max(maxi, v[0] - 0);
        maxi = max(maxi, 2 * (x - v[n - 1]));
        cout << maxi << endl;
    }
    return 0;
}