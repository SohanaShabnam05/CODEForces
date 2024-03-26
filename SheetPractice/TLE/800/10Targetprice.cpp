#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                char x;
                cin >> x;

                if (x == 'X')
                {
                    int val = min(i + 1, 10 - i);       // Horizantal checking
                    val = min(val, min(j + 1, 10 - j)); // vertical cxcheking
                    count += val;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}