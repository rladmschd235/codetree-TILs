#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    string s = to_string(n);

    for(int i = 0; i < s.length(); i++)
    {
        sum += (int)(s[i] - '0');
    }

    cout << sum;

    return 0;
}