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

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int sum = 1;
        vector<int> v;
        int curr = 1;
        v.push_back(1);
        while (sum < n)
        {
            if (curr + 2 < n)
            {
                v.push_back(curr + 2);
                curr = curr + 2;
                sum += curr;
            }
            else
            {
                v.push_back(curr + 1);
                curr = curr + 1;
                sum += curr;
            }
        }

        cout << v.size() << endl;
    }
    return 0;
}