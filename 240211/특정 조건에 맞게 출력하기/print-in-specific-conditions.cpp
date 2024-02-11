#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, cnt = 0;

    while(true)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        arr[cnt++] = n;
    }

    for(int i = 0; i < cnt; i++)
    {
        if(arr[i] % 2 == 1)
        {
            cout << arr[i] + 3 << " "; 
        }
        else
        {
            cout << arr[i] / 2 << " ";
        }
    }
    
    return 0;
}