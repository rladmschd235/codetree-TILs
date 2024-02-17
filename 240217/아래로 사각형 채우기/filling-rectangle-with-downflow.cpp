#include <iostream>
using namespace std;

int main() {
    int arr[10][10]  = {0};
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        arr[i][0] = i+1;
        cout << arr[i][0] << " ";

        for(int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i][j-1] + n;
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}