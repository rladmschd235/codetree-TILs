#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    int n = 0;
    cin >> A >> B;

    while(true)
    {
        A = A.substr(A.length()-1, 1) + A.substr(0, A.length()-1);
        n++;

        if(n == A.length())
        {
            cout << -1;
            return 0;
        }
        
        if(A == B)
        {
            break;
        }
    }

    cout << n;

    return 0;
}