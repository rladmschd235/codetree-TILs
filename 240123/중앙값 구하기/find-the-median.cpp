#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a < b)
    {
        if(b < c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
    else
    {
        if(a < c)
        {
            cout << c;
        }
        else
        {
            cout << a;
        }
    }

    return 0;
}