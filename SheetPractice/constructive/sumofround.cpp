#include <bits/stdc++.h>
using namespace std;

int digit(int n)
{
    int ct = 0;
    while (n != 0)
    {
        n = n / 10;
        ct++;
    }

    return ct;
}

bool check(int n)
{
    if (digit(n) == 1)
    {
        if (n / (10 * (n - 1)) != 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    vector<int> ct;
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
    }

    return 0;
}