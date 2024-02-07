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

        string s;
        if (n > 45)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 9; i >= 0; i--)
            {
                if (n <= 9 && n <= i)
                {
                    s += to_string(n);
                    n = 0;
                    break;
                }
                else
                {
                    s += to_string(i);
                    n = n - i;
                }
            }

            reverse(s.begin(), s.end());
            cout << s << endl;
        }
    }
    return 0;
}