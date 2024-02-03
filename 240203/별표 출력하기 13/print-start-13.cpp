#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n*2; i++)
    {
        if(i%2 == 1)
        {
            for(int j = 0; j < (i/2)+1; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for(int j = 0; j < n - (i/2); j++)
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}