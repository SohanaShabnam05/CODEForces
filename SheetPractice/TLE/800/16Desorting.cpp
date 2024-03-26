#include <bits/stdc++.h>
using namespace std;

bool sortt(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> c;
        int mini = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            int s = abs(v[i] - v[i - 1]) / 2;
            mini = min(mini, s);
        }

        if (!sortt(v))
        {
            cout << 0 << endl;
        }
        else
        {
            cout << mini + 1 << endl;
        }
    }

    return 0;
}