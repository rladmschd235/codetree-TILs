#include <iostream>
using namespace std;

void CheckMin(int a, int b, int c)
{
    if(a <= b && a <= c)
    {
        cout << a;
    }
    else if(b <= a && b <= c)
    {
        cout << b;
    }
    else if(c <= a && c <= b)
    {
        cout << c;
    }
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    CheckMin(a, b, c);

    return 0;
}