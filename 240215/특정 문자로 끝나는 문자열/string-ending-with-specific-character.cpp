#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10] = {""};
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
            cout << str[i] << endl;
        }
    }
    return 0;
}