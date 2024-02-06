#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 2; i < 9; i += 2)
    {
        for(int j = b; j > a-1; j--)
        {
            cout << j << " * " << i << " = " << i * j;
            if(j != a)
            {
                cout << " / ";
            }
        }
        cout << "\n";
    }
    return 0;
}