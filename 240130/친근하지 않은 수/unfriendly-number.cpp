#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i < n+1; i++)
    {
        if(i%2 == 0 || i%3 == 0 || i%5 == 0)
        {
            continue;
        }
        sum++;
    }
    cout << sum;
    return 0;
}