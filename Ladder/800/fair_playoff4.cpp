#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v;

        for (int i = 0; i < 4; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        int min1 = 0;
        int max1 = 0;
        int min2 = 0;
        int max2 = 0;

        // for (int i = 0; i < 2; i++)
        // {
        //     min1 = min(min1, v[i]);
        //     max1 = max(max1, v[i]);
        // }

        // for (int i = 2; i < 4; i++)
        // {
        //     min2 = min(min2, v[i]);
        //     max2 = max(max2, v[i]);
        // }

        if (v[0] < v[1])
        {
            min1 = v[0];
            max1 = v[1];
        }
        else
        {
            min1 = v[1];
            max1 = v[0];
        }

        if (v[2] < v[3])
        {
            min2 = v[2];
            max2 = v[3];
        }
        else
        {
            min2 = v[3];
            max2 = v[2];
        }

        if ((min1 < max2) && (min2 < max1))
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