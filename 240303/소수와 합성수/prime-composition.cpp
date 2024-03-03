#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 1)
    {
        cout << "one";
        return 0;
    }

    int half = sqrt(n);

    for(int i = 2; i < half+1; i++)
    {
        if(n%i == 0)
        {
            cout << "composition";
            return 0;
        }
    }

    cout << "prime";

    return 0;
}