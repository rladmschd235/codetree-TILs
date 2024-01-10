#include <iostream>
using namespace std;

bool CheckNum(int n)
{
    int n1 = n / 10;
    int n2 = n % 10;

    return n % 2 == 0 && (n1 + n2) % 5 == 0;
}

int main() {
    int n;

    cin >> n;

    if(CheckNum(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}