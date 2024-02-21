#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int q, c;
    cin >> str >> q;

    for(int i = 0; i < q; i++)
    {
        cin >> c;

        if(c == 1)
        {
            if(str.length() == 1)
            {
                cout << str << endl;
                continue;
            }
            str = str.substr(1, str.length()) + str.substr(0, 1);
            cout << str;
        }
        else if(c == 2)
        {
            if(str.length() == 1)
            {
                cout << str << endl;
                continue;
            }
            str = str.substr(str.length()-1, 1) + str.substr(0, str.length()-1);
            cout << str;
        }
        else if(c == 3)
        {
            if(str.length() == 1)
            {
                cout << str << endl;
                continue;
            }

            string result = "";

            for(int j = 0; j < str.length()+1; j++)
            {
                result += str[(str.length()-1)-j];
            }

            str = result;
            cout << str;
        }

        cout << endl;
    }
    return 0;
}