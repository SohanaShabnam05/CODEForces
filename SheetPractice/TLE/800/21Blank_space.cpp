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

        vector<char> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int curr = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == '0' && curr == 0)
            {
                curr = 1;
            }
            else if (v[i] == '0')
            {
                curr++;
            }
            else if (v[i] == '1')
            {
                curr = 0;
            }

            ans = max(ans, curr);
        }

        cout << ans << endl;
    }

    return 0;
}