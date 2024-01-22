#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;

    int sum = 0;
    int ans;

    for (int i = 1; i <= w; i++)
    {
        sum += k * i;
    }

    ans = sum - n;
    if (ans < 0)
    {
        cout << 0;
    }
    else
    {
        cout << ans;
    }

    return 0;
}