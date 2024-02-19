#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    int cnt = 0;
    cin >> A >> B;

    for(int i = 0; i < A.length()-1; i++)
    {
        if(A[i] == B[0] && A[i+1] == B[1])
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}