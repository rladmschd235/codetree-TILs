#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = (char) tolower(str[i]);
                cout << str[i];
            }
            else
            {
                cout << str[i];
            }
        }
    }
    return 0;
}