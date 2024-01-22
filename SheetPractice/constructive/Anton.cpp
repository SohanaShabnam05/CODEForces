#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string ele;
        cin >> ele;
        v.push_back(ele);
    }

    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == "Tetrahedron")
        {
            ans += 4;
        }
        else if (v[i] == "Cube")
        {
            ans += 6;
        }
        else if (v[i] == "Octahedron")
        {
            ans += 8;
        }
        else if (v[i] == "Dodecahedron")
        {
            ans += 12;
        }
        else if (v[i] == "Icosahedron")
        {
            ans += 20;
        }
    }

    cout << ans;
    return 0;
}