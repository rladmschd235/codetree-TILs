#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n, a, b;

    cin >> a >> b;

    arr[0] = a;
    arr[1] = b;

    cout << arr[0] << " " << arr[1] << " ";

    for(int i = 2; i < 10; i++)
    {
        arr[i] = arr[i-1] + 2 * arr[i-2];
        cout << arr[i] << " ";
    }

    return 0;
}