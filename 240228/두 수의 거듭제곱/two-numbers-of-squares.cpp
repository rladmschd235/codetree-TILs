#include <iostream>
using namespace std;

int Func(int a, int b)
{
    int result = 1;

    for(int i = 0; i < b; i++)
    {
        result *= a;
    }

    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << Func(a,b);
    return 0;
}