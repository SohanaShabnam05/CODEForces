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

        if (n % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int num = n;
            while (n > 0)
            {
                if (n % 2 == 0)
                {
                    n = n / 2;
                }
            }

            if (n == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (num % n == 0)
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}