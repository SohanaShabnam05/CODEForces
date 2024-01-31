#include <bits/stdc++.h>
using namespace std;

string f(int n, int k)
{
    string alp = "abcdefghijklmnopqrstuvwxyz";
    string res;

    int m = n * k;

    for (int i = 0; i < m; i++)
    {
        res += alp[i % k];
    }

    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string res = f(n, k);
        cout << res << endl;
    }
    return 0;
}