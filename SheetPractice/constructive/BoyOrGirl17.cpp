#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string input;
    cin >> input;

    unordered_set<int> st;
    for (int i = 0; i < input.length(); i++)
    {
        st.insert(input[i]);
    }

    if (st.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}