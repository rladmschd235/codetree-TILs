#include <iostream>
using namespace std;

int main() {
    long long int arr[100] = {0};
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }            
        }
    }

    cout << arr[0] << " " << arr[1];

    return 0;
}