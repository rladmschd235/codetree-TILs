#include <iostream>
using namespace std;

int main() {
    int arr[1001] = {0};
    int n, input, max = 0, idx = -1;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        arr[input]++;
    }

    for(int i = 1; i < 1001; i++)
    {
        if(arr[i] == 1 && i > idx)
        {
            idx = i;
        }
    }

    cout << idx;

    return 0;
}