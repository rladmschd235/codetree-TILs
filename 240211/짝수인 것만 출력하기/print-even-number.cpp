#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, num;
    int arr[100];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if(num%2 == 0)
        {
            arr[cnt] = num;
            cnt++;
        }
    }

    for(int i = 0; i < cnt; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}