#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int mini = INT_MAX;
    int maxi = INT_MIN;
    int num = 0;
    int distance = 0;

    mini = min(n1, min(n2, n3));
    maxi = max(n1, max(n2, n3));

    vector<int> v;
    v.push_back(n1);
    v.push_back(n2);
    v.push_back(n3);

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != mini && v[i] != maxi)
        {
            num = v[i];
        }
    }

    distance = abs(num - mini) + abs(num - maxi);

    cout << distance;
    return 0;
}