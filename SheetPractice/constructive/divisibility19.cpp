#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num, div;
        cin >> num >> div;

        int d = num % div;
        if (d != 0)
        {
            cout << div - (num % div) << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}