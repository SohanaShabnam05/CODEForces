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

        int maxi = 0;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                sum++;
            }
        }

        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            // int ct = 0;
            if (s[i] == '.')
            {
                ct++;
                maxi = max(maxi, ct);
            }
            else if (s[i] == '#')
            {
                // maxi = max(maxi, ct);
                ct = 0;
            }
        }

        if (maxi == 0)
        {
            cout << 0 << endl;
        }
        else if (maxi <= 2)
        {
            cout << sum << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}