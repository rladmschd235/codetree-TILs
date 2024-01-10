#include <iostream>
using namespace std;

int main() {
    int array[10] = {0};
    int a, b, result, sum = 0;

    cin >> a >> b;

    result = a;

    while(true)
    {
        if(result > 0)
        {
            array[result % b]++;
            result = result / b;
        }
        else
        {
            break;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        sum += (array[i] * array[i]);
    }

    cout << sum;

    return 0;
}