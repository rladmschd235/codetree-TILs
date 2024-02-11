#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0};
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

    for(int i = 1; i < 10; i++)
    {
        cout << i << " - " << arr[i] << endl;
    }
    return 0;
}