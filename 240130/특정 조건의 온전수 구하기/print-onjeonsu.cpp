#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n+1; i++)
    {
        if(i%2 == 0 || i%10 == 5 || (i%3 == 0 && i%9 != 0))
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}