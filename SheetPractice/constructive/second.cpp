#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ans = min((k * l / nl), min(c * d, p / np));
    ans = ans / n;
    cout << ans;
    return 0;
}