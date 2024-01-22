#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    c = 0;
    b = 0;
    while (c <= a)
    {
        b = b + 1;
        c = c + ((b * (b + 1)) / 2);
    }
    cout << b - 1;
    return 0;
}