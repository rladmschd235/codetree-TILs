#include <iostream>
using namespace std;

int main() {
    int array[101] = {0};
    int n, input;
    
    cin >> n;

    for(int i = 1; i < n+1; i++)
    {
        cin >> input;
        array[i] = input;
    }

    for(int i = n; i>0; i--)
    {
        if(array[i]%2==0)
        {
            cout << array[i] << " ";
        }
    }

    return 0;
}