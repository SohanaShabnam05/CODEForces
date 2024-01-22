#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int prev = -1;
        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (prev == -1)
                {
                    prev = i;
                }
                else
                {
                    res += (i - prev - 1);
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}