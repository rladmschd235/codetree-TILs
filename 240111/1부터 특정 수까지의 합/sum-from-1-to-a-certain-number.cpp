#include <iostream>
using namespace std;

int Sum(int n)
{
    int result = 0;

    for(int i = 1; i < n+1; i++)
    {
        result += i;
    }

    return result / 10;
}

int main() {
    int n;

    cin >> n;

    cout << Sum(n);

    return 0;
}