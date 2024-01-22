#define ll long long
#include <bits/stdc++.h>
using namespace std;

// complete it when you will be done

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll sx, sy;
        cin >> sx >> sy;
        --sx;
        --sy;

        vector<vector<int>> a = {{0, 0}, {0, m - 1}, {n - 1, 0}, {n - 1, m - 1}};
        ll dist = -1;
        int ind1 = 0;
        int ind2 = 0;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i == j)
                {
                    ll len = abs(sx - a[i][0]) + abs(sy - a[i][1]);
                    if (dist < 2 * len)
                    {
                        dist = 2 * len;
                        ind1 = i;
                        ind2 = i;
                    }
                }
                else
                {
                    // ll len1 = abs(sx-a[i][0]) + abs(sy - a[i][1]) +
                }
            }
        }
    }
    return 0;
}