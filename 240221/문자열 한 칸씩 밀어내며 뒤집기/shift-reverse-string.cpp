#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "";
    int q, c;
    cin >> str >> q;

    int len = str.length();

    for(int i = 0; i < q; i++)
    {
        cin >> c;

        if(c == 1)
        {
            str = str.substr(1, len) + str.substr(0, 1);
            cout << str;
        }
        else if(c == 2)
        {
            str = str.substr(len-1, 1) + str.substr(0, len-1);
            cout << str;
        }
        else if(c == 3)
        {
            string result = "";

            for(int j = 0; j < str.length(); j++)
            {
                result += str[(len-1)-j];
            }

            str = result;
            cout << str;
        }

        cout << endl;
    }
    return 0;
}