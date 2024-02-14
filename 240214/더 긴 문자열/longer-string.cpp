#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;

    cin >> str1 >> str2;

    if(str1.length() != str2.length())
    {
        cout << (str1.length() > str2.length() ? str1 :str2) << " ";
        cout << (str1.length() > str2.length() ? str1.length() :str2.length());
    }
    else
    {
        cout << "same";
    }
     
    return 0;
}