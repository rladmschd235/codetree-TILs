#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);

    while (str1.find(" ") != string::npos)
    {
        str1.erase(str1.find(" "), 1);
    }

    while (str2.find(" ") != string::npos)
    {
        str2.erase(str2.find(" "), 1);
    }

    cout << str1 << str2;

    return 0;
}