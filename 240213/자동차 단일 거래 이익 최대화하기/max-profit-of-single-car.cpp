#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int arr[1000] = {0};
    int n, max = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] - arr[i] > max)
            {
                max = arr[j] - arr[i];
            }
        }
    }

    cout << max;
    return 0;
}