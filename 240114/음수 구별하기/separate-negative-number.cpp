#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if(a < 0)
    {
        cout << a << endl;
        cout << "minus";
        return 0;
    }

    cout << a;
    return 0;
}