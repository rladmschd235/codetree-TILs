#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i < n+1; i++)
    {
        if(n%i == 0)
        {
            cnt++;
        }
    }
    if(cnt > 2)
    {
        cout << 'C';
    }
    else
    {
        cout << 'N';
    }
    return 0;
}