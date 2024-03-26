#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int negc = 0;
        int posc = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                posc++;
            }
            else
            {
                negc++;
            }
        }

        int ct = 0;
        while (negc > posc)
        {
            negc--;
            posc++;
            ct++;
        }

        if (negc % 2)
        {
            cout << ct + 1 << endl;
        }
        else
        {
            cout << ct << endl;
        }
    }

    return 0;
}
