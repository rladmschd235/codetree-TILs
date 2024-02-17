#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i= 0; i < str.length(); i++)
    {
        if(((str.length()-1)-i)%2 == 1)
        {
            cout << str[(str.length()-1)-i];
        }
    }
    return 0;
}