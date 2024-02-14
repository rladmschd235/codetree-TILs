#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int max = 0, min = 21;

    for(int i = 0; i < 3; i++)
    {
        cin >> str;

        if(str.length() > max)
        {
            max = str.length();
        }
        if(str.length() < min)
        {
            min = str.length();
        }
    }

    cout << max - min;
    
    return 0;
}