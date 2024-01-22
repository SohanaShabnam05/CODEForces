#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0;
    int j = 1;
    string res = "";

    while (i < n)
    {
        res += s[i];
        i += (++j);
    }

    cout << res << endl;

    return 0;
}