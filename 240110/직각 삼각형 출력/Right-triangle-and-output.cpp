#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cnt++;
        for(int j = 0; j < i+cnt; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}