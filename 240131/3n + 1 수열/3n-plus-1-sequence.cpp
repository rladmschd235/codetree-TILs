#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n; 
    while(n != 1)
    {
        if(n%2 == 0)
        {
            n /= 2;
            cnt++;
        }
        else
        {
            n = n * 3 + 1;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}