#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int res, num = 1;
        while (n - num * k > -1)
        {
            if (!((n - (num * k)) % num))
            {
                res = num;
            }
            num++;
        }
        cout << res << endl;
    }

    return 0;
}
