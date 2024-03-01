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

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        int flag = 0;
        sum = accumulate(v.begin(), v.end(), 0);

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 3 == 1)
            {
                flag = 1;
            }
        }

        if (sum % 3 == 0)
        {
            cout << "0" << endl;
        }
        else if (sum % 3 == 2)
        {
            cout << "1" << endl;
        }
        else if (flag)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}