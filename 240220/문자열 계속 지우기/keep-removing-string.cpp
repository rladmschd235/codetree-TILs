#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    while(true)
    {
        if(A.find(B) == string::npos)
        {
            break;
        }

        A.erase(A.find(B), B.length());
    }

    cout << A;
    return 0;
}