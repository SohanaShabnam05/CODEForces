#include <iostream>
using namespace std;

int lastdigit(int n)
{
    int h = 0;
    h = n % 10;
    return h;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    int ans = 0;

    while (k)
    {
        if (lastdigit(n) == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }

        k--;
    }

    cout << n;
    return 0;
}