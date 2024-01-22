#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        int num = a % 10;
        int dgct = 0;

        while (a != 0)
        {
            a = a / 10;
            dgct++;
        }

        if (dgct == 1)
        {
            cout << (num - 1) * 10 + 1 << endl;
        }
        else if (dgct == 2)
        {
            cout << (num - 1) * 10 + 3 << endl;
        }
        else if (dgct == 3)
        {
            cout << (num - 1) * 10 + 6 << endl;
        }
        else if (dgct == 4)
        {
            cout << (num - 1) * 10 + 10 << endl;
        }
    }

    return 0;
}