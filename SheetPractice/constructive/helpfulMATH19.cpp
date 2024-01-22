#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; i += 2)
    {
        for (int j = 0; j < len - 1; j += 2)
        {
            if (s[j] > s[j + 2])
            {
                swap(s[j], s[j + 2]);
            }
        }
    }

    cout << s << endl;
    return 0;
}