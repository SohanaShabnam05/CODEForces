#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int curr = 0;
    int cap = 0;

    while (n)
    {
        int a, b;
        cin >> a >> b;
        curr = curr - a;
        curr = curr + b;
        cap = max(curr, cap);
        n--;
    }
    cout << cap;

    return 0;
}