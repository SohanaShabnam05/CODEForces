#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ct = 0;
    int sum = 0;
    vector<int> v;
    for (int i = 0; i < 7; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    int i = 0;
    while (sum < n)
    {
        sum += v[i % 7];
        if (sum >= n)
            break;
        ct++;
        i++;
    }

    cout << (ct % 7) + 1 << endl;

    return 0;
}