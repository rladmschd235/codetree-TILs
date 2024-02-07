#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for(int j = 0; j < n-i; j++)
        {
            cout << (char)(65+cnt) << " ";
            cnt++;
            if(cnt == 26)
            {
                cnt = 0;
            }
        }
        cout << "\n";
    }
    return 0;
}