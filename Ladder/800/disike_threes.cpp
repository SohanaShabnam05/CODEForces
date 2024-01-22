#include <bits/stdc++.h>
using namespace std;

int last(int n)
{
    int l = n % 10;
    return l;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;

        if (n % 3 == 0 && last(n) != 3)
        {
            cout << n << endl;
        }
        else
        {
            cout << n + 1;
        }
    }
    return 0;
}