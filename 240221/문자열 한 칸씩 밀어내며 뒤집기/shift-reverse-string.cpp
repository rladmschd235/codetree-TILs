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

        switch(c)
        {
            case 1:
            str = str.substr(1, str.length()) + str.substr(0, 1);
            cout << str;
            break;
            case 2:
            str = str.substr(str.length()-1, 1) + str.substr(0, str.length()-1);
            cout << str;
            break;
            case 3:
            string result = "";
            for(int j = 0; j < str.length()+1; j++)
            {
                result += str[(str.length()-1)-j];
            }
            str = result;
            cout << str;
            break;
        }

        cout << endl;
    }
    return 0;
}