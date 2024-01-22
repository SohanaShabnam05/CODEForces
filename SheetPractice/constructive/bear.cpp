#include <iostream>
using namespace std;

int main()
{
    int bw, lw;
    cin >> bw >> lw;
    int ans = 0;

    while (bw <= lw)
    {
        bw = bw * 3;
        lw = lw * 2;
        ans++;
    }

    cout << ans;
    return 0;
}