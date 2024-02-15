#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[100] = {""};
    int n, len = 0, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
        len += str[i].length();

        if(str[i][0] == 'a')
        {
            cnt++;
        } 
    }

    cout << len << " " << cnt;

    return 0;
}