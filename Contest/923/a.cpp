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

        string s = "";

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s += c;
        }

        int f = 0;
        int l = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                f = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                l = i;
                break;
            }
        }

        cout << l - f + 1 << endl;
    }
    return 0;
}