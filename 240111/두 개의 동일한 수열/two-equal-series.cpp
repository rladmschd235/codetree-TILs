#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[100] = {0};
    int B[100] = {0};
    int n, input;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        A[i] = input;
    }

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        B[i] = input;
    }

    sort(A, A+n);
    sort(B, B+n);

    for(int i = 0; i < n; i++)
    {
        if(A[i] != B[i])
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}