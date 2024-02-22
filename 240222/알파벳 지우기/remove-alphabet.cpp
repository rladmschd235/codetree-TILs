#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B, result1 = "", result2 = "";
    cin >> A >> B;

    for(int i = 0; i < A.length(); i++)
    {
        if(A[i] >= '0'&& A[i] <= '9')
        {
            result1 += A[i];
        }
    }

    for(int i = 0; i < B.length(); i++)
    {
        if(B[i] >= '0'&& B[i] <= '9')
        {
            result2 += B[i];
        }
    }

    cout << stoi(result1) + stoi(result2);

    return 0;
}