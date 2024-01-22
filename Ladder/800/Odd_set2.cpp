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
        for (int i = 0; i < 2 * n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        int ct_odd = 0;

        for (auto i : v)
        {
            if (i % 2 == 1)
            {
                ct_odd++;
            }
        }

        if (ct_odd == n)
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
