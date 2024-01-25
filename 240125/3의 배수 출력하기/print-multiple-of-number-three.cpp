#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    while(n--)
    {
        if(cnt%3 == 0)
        {
            cout << cnt << " ";
        }
        cnt++;
    }
    return 0;
}