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

        int k = n - 1;
        vector<int> v(k);

        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }

        int sum = accumulate(v.begin(), v.end(), 0);

        if (sum > 0)
        {
            cout << sum - (2 * sum) << endl;
        }
        else
        {
            cout << abs(sum) << endl;
        }
    }
    return 0;
}