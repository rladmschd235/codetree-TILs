#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (char) tolower(str[i]);
        }   
        else
        {
            str[i] = (char) toupper(str[i]);
        }
    }

    cout << str;
    return 0;
}