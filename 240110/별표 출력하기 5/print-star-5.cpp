#include <iostream>
using namespace std;

int main() {
    int n, cnt;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < (n - i) * (n - i); j++)
        {
            cout << "*";
            cnt++;

            if (cnt == (n-i))
            {
                cout << " ";
                cnt = 0;
            }
        }
        cout << "\n";
    }

    return 0;
}