#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int res = 0;

    if (n < m)
    {
        res = -1;
    }
    else
    {
        if (n % 2)
        {
            res += (n / 2) + 1;
        }
        else
        {
            res += n / 2;
        }
        while (res % m > 0)
        {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}