#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int arr[11] = {0};
    int n, min = 100;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] != arr[j])
            {
                if(min > abs(arr[i] - arr[j]))
                {
                    min = abs(arr[i] - arr[j]);
                }
            }
        }
    }

    cout << min;

    return 0;
}