#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    while(n < 1000)
    {
        cnt++;
        if(n%2 == 0)
        {
            n *= 3 + 1;
        }
        else
        {
            n *= 2 + 2;
        }
    }
    cout << cnt;
    return 0;
}