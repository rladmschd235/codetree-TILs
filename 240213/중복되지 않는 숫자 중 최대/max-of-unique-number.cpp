#include <iostream>
using namespace std;

int main() {
    int arr[1001] = {0};
    int n, input, max = -1;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        arr[input]++;
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1 && i > max)
        {
            max = i;
        }
    }

    cout << max;

    return 0;
}