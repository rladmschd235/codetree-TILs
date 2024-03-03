#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1, arr[20][20] = {0};
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[j][i] = cnt;
            cnt++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}