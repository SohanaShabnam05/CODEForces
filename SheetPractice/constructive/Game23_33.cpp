#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ct = 0;

    if (n > m)
    {
        cout << "-1" << endl;
    }
    else if (n == m)
    {
        cout << "0" << endl;
    }
    else
    {
        if (m % n == 0)
        {
            int k = m / n;
            while (k >= 0)
            {
                if (k % 2 == 0)
                {
                    k = k / 2;
                    ct++;
                }
                else if (k % 3 == 0)
                {
                    k = k / 3;
                    ct++;
                }
                else
                {
                    // Break the loop if neither condition is satisfied
                    break;
                }
            }

            cout << (k == 1 ? ct : -1) << endl; // Check if k is 1 after the loop
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
