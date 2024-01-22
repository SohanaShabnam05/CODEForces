#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
    if (c == 'A' || c == 'a' || c == 'O' || c == 'o' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'U' || c == 'u' || c == 'Y' || c == 'y')
    {
        return true;
    }

    return false;
}

int main()
{
    string s;
    cin >> s;
    string t = "";
    string res = "";

    for (char c : s)
    {
        t += tolower(c);
    }

    for (int i = 0; i < t.length(); i++)
    {
        if (!isvowel(t[i]))
        {
            res += '.';
            res += t[i];
        }
    }

    cout << res << endl;
    return 0;
}