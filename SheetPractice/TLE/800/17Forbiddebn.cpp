#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        int d = n / k;
        int rem = n - (d * k);

        if (rem == 1 || k == 1)
        {
            if (x == 1)
            {
                cout << "NO" << endl;
                continue;
            }
        }

        cout << "YES" << endl;
        // cout<<d+rem<<endl;
        vector<int> v;
        while (d--)
        {
            v.push_back(k);
        }
        while (rem--)
        {
            v.push_back(1);
        }

        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
