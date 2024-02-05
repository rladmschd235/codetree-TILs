#include <iostream>
using namespace std;

int main() {
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;

    cnt2 = n+1;

    for(int i = 0; i < n; i++)
    {
        ++cnt1;
        --cnt2;
        for(int j = 0; j < n; j++)
        {
            if(j%2 == 0)
            {
                cout << cnt1;
            }
            else
            {
                cout << cnt2;
            }
        }
        cout << "\n";
    }
    return 0;
}