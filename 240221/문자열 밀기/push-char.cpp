#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    str = str.substr(1, str.length()) + str.substr(0, 1) ;

    cout << str;
    return 0;
}