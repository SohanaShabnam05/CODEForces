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

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int andd = arr[0];
        for (int i = 1; i < n; i++)
            andd = andd & arr[i];

        cout << andd << endl;
    }
    return 0;
}