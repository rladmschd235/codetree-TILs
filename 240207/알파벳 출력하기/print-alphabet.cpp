#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            cout << (char)(65+cnt);
            cnt++;
        }
        cout << "\n";
    }
    return 0;
}