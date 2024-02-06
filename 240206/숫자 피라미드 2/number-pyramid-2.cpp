#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for(int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < i+1; j++)
        {
            ++cnt;
            cout << cnt << " ";
        }
        cout << "\n";
    }
    return 0;
}