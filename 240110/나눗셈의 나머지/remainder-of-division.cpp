#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int array[10] = { 0 };
    int a, b, sum = 0;

    cin >> a >> b;

    while (a >= 0)
    {
        array[a % b]++;
        a = a / b;
    }

    for (int i = 0; i < 10; i++)
    {
        sum += array[i] * array[i];
    }

    cout << sum;

    return 0;
}