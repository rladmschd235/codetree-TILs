#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < n-i+2; j++)
        {
            if(j != n-i+1)
                cout << i << " * " << j << " = " << i * j << " / ";
            else
                cout << i << " * " << j << " = " << i * j;
        } 
        cout << "\n";
    }

    return 0;
}