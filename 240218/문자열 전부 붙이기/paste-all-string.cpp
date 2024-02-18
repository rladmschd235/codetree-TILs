#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10] = {""};
    string result = "";
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
        result += str[i];
    }

    cout << result;
    return 0;
}