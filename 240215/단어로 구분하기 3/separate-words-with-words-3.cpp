#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10] = {""};

    for(int i = 0; i < 10; i++)
    {
        cin >> str[i];
    }

    for(int i = 0; i < 10; i++)
    {
        cout << str[9-i] << endl;
    }

    return 0;
}