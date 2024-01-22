#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long res = v[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        int mini = min(v[i + 1] - 1, v[i]);

        if (mini < 0)
            mini = 0;
        v[i] = mini;
        res += mini;
    }

    cout << res << endl;
    return 0;
}