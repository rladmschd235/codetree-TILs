#include <iostream>
using namespace std;

int main() {
    char arr[100][100] = {};
    int output = 65;
    int cnt = 0, n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[(n-1)-j][(n-1)-i] = (char)output;
            output++;

            if(output == 91)
            {
                output = 65;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}