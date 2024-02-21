#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, C;

    cin >> A >> C;

    int len = A.length();

    for(int i = 0; i < C.length(); i++)
    {
        if(C[i] == 'L')
        {
            A = A.substr(1, len) + A.substr(0, 1);
        }
        else
        {
            A = A.substr(len-1, 1) + A.substr(0, len-1); 
        }
    }

    cout << A;
    return 0;
}