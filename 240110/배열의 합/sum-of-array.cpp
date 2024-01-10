#include <iostream>
using namespace std;

int main() {
    int input, sum =0;

    for(int i =0; i < 4; i++)
    {
        sum = 0;
        for(int j =0; j < 4; j++)
        {
            cin >> input;
            sum += input;
        }
        cout << sum;
    }

    return 0;
}