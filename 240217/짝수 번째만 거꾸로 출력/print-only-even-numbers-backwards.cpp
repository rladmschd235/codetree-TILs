#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i= 0; i < str.length(); i++)
    {
        if((str.length()-i-1)%2 == 1)
        {
            cout << str[str.length()-i];
        }
    }
    return 0;
}