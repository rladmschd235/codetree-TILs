#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    int sum = 0, idx;
    cin >> A >> B;

    idx = 0;

    for(int i = 0; i < A.length(); i++)
    {
        if(A[i] >= '0' && A[i] <= '9')
        {
            idx = i;
        }
        else
        {
            break;
        }
    }

    sum += stoi(A.substr(0, idx+1));

    idx = 0;

    for(int i = 0; i < B.length(); i++)
    {
        if(B[i] >= '0' && B[i] <= '9')
        {
            idx = i;
        }
        else
        {
            break;
        }
    }    

    sum += stoi(B.substr(0, idx+1));

    cout << sum;

    return 0;
}