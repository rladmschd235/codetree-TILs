#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[1000] = {""};
    string result = "";
    int n, line = 0, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
        result += str[i];
    }

    for(int i = 0; i < result.length(); i++)
    {
        if(result[i] != ' ') 
        {
            cout << result[i];
            cnt++;
        }
        if(cnt == 5)
        {
            cnt = 0;
            cout << endl;
            line++;
        }
    }

    return 0;
}