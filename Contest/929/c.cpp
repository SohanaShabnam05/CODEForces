#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, num;
        cin >> a >> b >> num;
        unordered_set<int> st;
        int first = -1;
        while (++first < 10000)
        {
            int x = pow(a, first);
            if (x > num)
                break;
            int second = -1;
            while (++second < 10000)
            {
                int y = x * pow(b, second);
                if (y > num)
                    break;
                if (num % y == 0)
                    st.insert(num / y);
            }
        }
        cout << st.size() << '\n';
    }
    return 0;
}