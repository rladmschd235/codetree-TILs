#include <iostream>
using namespace std;

int main() {
    int arr[3] = {0};
    int max = -101, a, b, c;

    cin >> a >> b >> c;

    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    for(int i = 0; i < 3; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}