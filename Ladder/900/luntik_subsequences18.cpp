#define ll long long
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

        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                one++;
            }
            else if (v[i] == 0)
            {
                zero++;
            }
        }

        // no of one * pow(2,zero);
        cout << one * (1ll << zero) << endl;
    }
    return 0;
}