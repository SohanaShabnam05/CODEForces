#include <iostream>
#include <string>
using namespace std;

void generateBinaryStrings(string current, int length)
{
    if (length == 0)
    {
        cout << current << endl;
    }
    else
    {
        generateBinaryStrings(current + "0", length - 1);
        generateBinaryStrings(current + "1", length - 1);
    }
}

int main()
{
    int length;
    cout << "Enter the length of binary strings: ";
    cin >> length;

    generateBinaryStrings("", length);

    return 0;
}
