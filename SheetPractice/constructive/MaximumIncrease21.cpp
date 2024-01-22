#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> input;
    while (t--)
    {
        int a;
        cin >> a;

        input.push_back(a);
    }

    int ct = 1;
    int maxi = 1;
    for (int i = 0; i < input.size() - 1; i++)
    {
        if (input[i] < input[i + 1])
        {
            ct++;
        }
        else
        {
            ct = 1;
        }

        maxi = max(ct, maxi);
    }

    cout << maxi << endl;

    return 0;
}