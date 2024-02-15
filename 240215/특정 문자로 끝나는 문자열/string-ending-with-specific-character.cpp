#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10] = {""};
    bool isNone = true;
    char input;

    for(int i = 0; i < 10; i++)
    {
        cin >> str[i];
    }

    cin >> input;

    for(int i= 0; i < 10; i++)
    {
        if(str[i][str[i].length()-1] == input)
        {
            isNone = false;
            cout << str[i] << endl;
        }
    }

    if(isNone)
        cout << "None";

    return 0;
}