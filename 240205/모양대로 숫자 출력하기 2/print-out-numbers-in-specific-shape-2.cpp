#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cnt += 2;
            cout << cnt << " ";
            if(cnt == 8)
            {
                cnt = 0;
            }
        }
        cout << "\n";
    }
    return 0;
}