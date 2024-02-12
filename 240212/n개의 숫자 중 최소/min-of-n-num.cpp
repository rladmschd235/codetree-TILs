#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100];
    int min = INT_MAX, n, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == min)
        {
            cnt++;
        }
    }

    cout << min << " " << cnt;

    return 0;
}