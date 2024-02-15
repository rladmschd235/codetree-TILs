#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[20] = {""};
    int n, cnt = 0, len = 0;
    char input;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    cin >> input;

    for(int i = 0; i < n; i++)
    {
        if(str[i][0] == input)
        {
            cnt++;
            len += str[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << (double)len / cnt;

    return 0;
}