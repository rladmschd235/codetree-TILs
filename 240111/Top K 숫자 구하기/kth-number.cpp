#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[1000] = {0};
    int n, k, input;

    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        arr[i] = input;
    }

    sort(arr, arr + n);

    cout << arr[k-1];

    return 0;
}