#include <iostream>
using namespace std;

int main() {
    int array[10] = {0};
    int A1, A2;

    cin >> A1 >> A2;

    array[0] = A1;
    array[1] = A2;

    cout << array[0] << " ";
    cout << array[1] << " ";

    for(int i = 2; i < 10; i++)
    {
        array[i] = array[i-1] + (array[i-2]*2);
        cout << array[i] << " ";
    }

    return 0;
}