#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    while(true)
    {
        cin >> s;
        if(s == "END")
        {
            break;
        }
        for(int i = 0; i < s.length(); i++)
        {
            cout << s[(s.length()-1)-i]; 
        }
        cout << endl;
    }
    return 0;
}