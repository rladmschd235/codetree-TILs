#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i < n+1; i++)
    {
        for(int j = n; j > 0; j--)
        {
            cout << i * j << " ";
        }
        cout << "\n";
    }

    return 0;
}