#include <iostream>
using namespace std;

int main() {
    int arr[5] = {0};
    
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout << (char)arr[i] << " ";
    }
    return 0;
}