#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while(a != b-2)
    {
        cout << a << " ";
        a -= 2;
    }
    return 0;
}