#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    while(n > 1)
    {
        n /= cnt;
        cnt++;
    }
    cout << cnt-1;
    return 0;
}