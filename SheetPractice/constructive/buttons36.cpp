#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = n;
    for (int i = 1; i < n; i++)
    {
        res += (n - i) * i;
    }

    cout << res << endl;
    return 0;
}