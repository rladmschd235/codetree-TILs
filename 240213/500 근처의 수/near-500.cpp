#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0};
    int max = 0, min = 500;

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 1; j < 10-i; j++)
        {
            if(arr[j] > arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] > max && arr[i] <= 500)
        {
            max = arr[i];
        }
    }

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] >= 500)
        {
            min = arr[i];
        }
    }

    cout << max << " " << min;
    return 0;
}