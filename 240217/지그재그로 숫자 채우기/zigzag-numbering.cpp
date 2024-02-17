#include <iostream>
using namespace std;

int main() {
    int arr[100][100] = {0};
    int n, m, cnt = 0;

    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        if(i%2 == 1)
        {
            for(int j = 0; j < n; j++)
            {
                arr[(n-1)-j][i] = cnt;
                cnt++;
            }
        }
        else
        {
            for(int j = 0; j < n; j++)
            {
                arr[j][i] = cnt;
                cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}