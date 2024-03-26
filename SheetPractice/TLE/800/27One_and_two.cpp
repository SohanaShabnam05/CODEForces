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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 2)
            {
                ct++;
            }
        }

        if (ct % 2)
        {
            cout << -1 << endl;
        }
        else if (ct == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int remove = ct / 2;
            int i = 0;

            while (remove > 0)
            {
                if (v[i] == 2)
                {
                    i++;
                    remove--;
                }
                else
                {
                    i++;
                }
            }

            cout << i << endl;
        }
    }
    return 0;
}