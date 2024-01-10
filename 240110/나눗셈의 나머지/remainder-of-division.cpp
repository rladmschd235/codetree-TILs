#include <iostream>
using namespace std;

int main() {
    int array[10] = { 0 };
    int a, b, sum = 0;

    cin >> a >> b;

    while (a > 1)
    {
        array[a % b]++;
        a /= b;
    }

    for (int i = 0; i < 10; i++)
    {
        sum += array[i] * array[i];
    }

    cout << sum;

    return 0;
}