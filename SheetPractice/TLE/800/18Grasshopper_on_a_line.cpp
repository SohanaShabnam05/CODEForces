#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k;

        int ans1 = x;
        int ans2 = 0;

        if (x < k)
        {
            cout << 1 << endl;
            cout << x << endl;
        }
        else
        {
            if (x % k != 0)
            {
                cout << 1 << endl;
                cout << x << endl;
            }
            else
            {
                cout << 2 << endl;
                while (ans1 % k == 0 || ans2 % k == 0)
                {
                    ans1--;
                    ans2++;
                }

                cout << ans1 << " ";
                cout << ans2 << endl;
            }
        }
    }
    return 0;
}