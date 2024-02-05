#include <iostream>
using namespace std;

int main() {
    int n, cnt = 10;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            --cnt;
            cout << cnt;

            if(cnt == 1)
            {
                cnt = 10;
            }
        }
        cout << "\n";
    }

    return 0;
}