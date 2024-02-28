#include <iostream>
#include <cmath>
using namespace std;

int Func1(int a, int b)
{
    return a + b;
} 

int Func2(int a, int b)
{
    return a - b;
} 

int Func3(int a, int b)
{
    return trunc(a / b);
} 

int Func4(int a, int b)
{
    return a * b;
} 

int main() {
    int a, b;
    char c;

    cin >> a >> c >> b;

    if(c == '+')
    {
        cout << a << " + " << b << " = " << Func1(a, b);
    }
    else if(c == '-')
    {
        cout << a << " - " << b << " = " << Func2(a, b);
    }
    else if(c == '/')
    {
        cout << a << " / " << b << " = " << Func3(a, b);
    }
    else if(c == '*')
    {
        cout << a << " * " << b << " = " << Func4(a, b);
    }
    else
    {
        cout << "False";
    }
    
    return 0;
}