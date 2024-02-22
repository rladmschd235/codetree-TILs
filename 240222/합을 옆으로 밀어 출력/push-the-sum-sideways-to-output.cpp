#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[100] = {0};
    int n, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    string s = to_string(sum);

    cout << s.substr(1, s.length()) + s.substr(0, 1);
    return 0;
}