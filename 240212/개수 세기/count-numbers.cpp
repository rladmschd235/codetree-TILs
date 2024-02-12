#include <iostream>
using namespace std;

int main() {
    int n, m, num;
    int arr[100] = {0};

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num]++;
    }

    cout << arr[m];

    return 0;
}