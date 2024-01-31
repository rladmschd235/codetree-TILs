#include <iostream>
using namespace std;

int main() {
    int age, sum = 0, cnt = 0;
    while(true)
    {
        cin >> age;
        if(age / 10 != 2)
        {
            break;
        }
        sum += age;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)sum / cnt;
    return 0;
}