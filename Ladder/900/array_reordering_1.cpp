#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int> &v)
{
    int i = 0;
    int j = 0;
    int n = v.size();
    while (i != n)
    {
        if (v[i] % 2 == 0)
        {
            swap(v[i], v[j]);
            j++;
        }
        i++;
    }
}

int good(vector<int> &v)
{

    int n = v.size();
    rearrange(v);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(v[i], 2 * v[j]) > 1)
            {
                cnt++;
            }
        }
    }

    return cnt;
}

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
            int val;
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());

        int ct = good(v);
        cout << ct << endl;
    }
    return 0;
}