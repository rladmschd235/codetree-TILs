#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {0};
    int n;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> n;
            arr[i][j] = 1;
            arr[i][j] *= n;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> n;
            arr[i][j] *= n;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}