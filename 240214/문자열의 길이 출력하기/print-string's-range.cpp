#include <iostream>
using namespace std;

int main() {
    string str;
    int length = 0;

    for(int i = 0; i < 2; i++)
    {
        cin >> str;
        length += str.length();
    }

    cout << length;
    return 0;
}