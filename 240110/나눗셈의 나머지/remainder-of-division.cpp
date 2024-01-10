#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int array[1000] = {0};
    int a, b, result, sum = 0;

    cin >> a >> b;

    result = a;

    while(result > 0)
    {
        array[result % b]++;
        result = result / b;
    }

    for(int i = 0; i < 1000; i++)
    {
        sum += pow(array[i], 2);
    }

    cout << sum;

    return 0;
}