#include <iostream>
using namespace std;

int main() {
    int array[10] = {0};
    int input;

    for(int i = 0; i<10; i++)
    {
        cin >> input;
        array[i] = input;
    }

    for(int i = 0; i<10; i++)
    {
        if(array[i]%3==0)
        {
            cout << array[i-1];
            break;
        }
    }

    return 0;
}