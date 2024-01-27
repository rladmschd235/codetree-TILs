#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i < b + 1;)
    {
        cout << i << " ";

        if (i % 2 == 1)
        {
            i *= 2;
        }
        else
        {
            i += 3;
        }
    }
    return 0;
}