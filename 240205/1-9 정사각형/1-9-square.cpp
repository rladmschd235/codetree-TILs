#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ++cnt;
            cout << cnt;
            if(cnt == 9)
            {
                cnt = 0;
            }  
        }
        cout << "\n";
    }
    return 0;
}