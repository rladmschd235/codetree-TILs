#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int arr[100] = {0};
    int n, input;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        arr[i] = input;
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    sort(arr, arr + n, greater<int>());

        for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}