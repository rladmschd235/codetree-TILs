#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i < 200; i+=n)
    {
        if(i%n == 0)
        {
            cout << i << " ";
        }
        if(i%10 == 0)
        {
            break;
        }
    }

    return 0;
}