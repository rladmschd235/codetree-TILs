#include <iostream>
using namespace std;

void Divide(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            arr[i] /= 2;
        }
    }
}

int main() {
    int array[50] = {0};
    int n, input;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;

        array[i] = input;
    }

    Divide(array, n);

    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}