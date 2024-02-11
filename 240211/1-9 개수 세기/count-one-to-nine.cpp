#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0};
    int n, num;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num]++;
    }

    for(int i = 1; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}