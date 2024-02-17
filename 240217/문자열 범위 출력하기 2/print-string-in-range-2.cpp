#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n, cnt = 0;

    cin >> str >> n;

    for(int i = 0; i < n; i++)
    {
        cnt++;
        cout << str[str.length()-i-1];
        if(cnt == n)
        {
            break;
        }
    }
    return 0;
}