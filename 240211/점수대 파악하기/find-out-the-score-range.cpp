#include <iostream>
using namespace std;

int main() {
    int arr[11] = {0};
    int n;

    while(true)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        arr[n/10]++;
    }

    for(int i = 10; i > 0; i--)
    {
        cout << i * 10 << " - " << arr[i] << endl;
    }

    return 0;
}