#include <iostream>
using namespace std;

int main() {
    int arr[1001] = {0};
    int n, input, max = 0, idx = -1;
    bool isNone = false;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        arr[input]++;
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == max)
        {
            isNone = true;
        }
        if(arr[i] != 0 && arr[i] > max)
        {
            isNone = false;
            idx = i;
        }
    }

    if(isNone)
    {
        cout << -1;
    }
    else
    {
        cout << idx;
    }

    return 0;
}