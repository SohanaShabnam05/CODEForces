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

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        int sum = 0;
        for (auto i : v)
        {
            sum += i;
        }

        if (sum == n)
        {
            cout << 0 << endl;
        }
        if (sum > n)
        {
            cout << sum - n << endl;
        }
        if (n > sum)
        {
            cout << 1 << endl;
        }
    }
    return 0;
}