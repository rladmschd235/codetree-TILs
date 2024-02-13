#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, max = -1000, min = 1000;

    for(int i = 0; i < 100; i++)
    {
        cin >> arr[i];

        if(arr[i] == -999 || arr[i] == 999)
        {
            break;
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << max << " " << min;

    return 0;
}