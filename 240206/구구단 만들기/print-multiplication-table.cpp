#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 1; i < 10; i++)
    {
        for(int j = b; j > a-1; j -= 2)
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