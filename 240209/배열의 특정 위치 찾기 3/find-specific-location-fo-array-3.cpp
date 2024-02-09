#include <iostream>
using namespace std;

int main() {
    int cnt = 0, n;
    int arr[100];

    while(true)
    {
        cin >> arr[cnt];
        if(arr[cnt] == 0)
        {
            break;
        }
        cnt++;
    }

    cout << arr[cnt-3] + arr[cnt-2] + arr[cnt-1];

    return 0;
}