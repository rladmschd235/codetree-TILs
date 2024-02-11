#include <iostream>
using namespace std;

int main() {
    int arr[7] = {0};
    int n;

    for(int i = 0; i < 10; i++)
    {
        cin >> n;
        arr[n]++;
    }

    for(int i = 1; i < 7; i++)
    {
        cout << i << " - " << arr[i] << endl;
    }
    return 0;
}