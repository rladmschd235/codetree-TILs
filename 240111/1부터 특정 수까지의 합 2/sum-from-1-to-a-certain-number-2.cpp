#include <iostream>
using namespace std;

int Add(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + Add(n-1);
}

int main() {
    int n;

    cin >> n;

    cout << Add(n);

    return 0;
}