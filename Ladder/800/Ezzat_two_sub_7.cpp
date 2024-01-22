#include <bits/stdc++.h>
using namespace std;

// find the maximum value; let us say it is m
// Sum of all elements of array
// f(a) = Am/1 = Am
// f(b) = Sum - Am /n-1

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

        double sum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (v[i] > maxi)
            {
                maxi = v[i];
            }
        }

        double b = (sum - maxi) / (n - 1.0);

        cout << fixed << setprecision(9) << b + maxi << endl;
    }
    return 0;
}