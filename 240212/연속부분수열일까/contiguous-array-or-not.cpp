#include <iostream>
using namespace std;
int main() {
    bool isChecked = false;
    int A[100], B[100];
    int n1, n2, idx;

    cin >> n1 >> n2;

    for(int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n2; i++)
    {
        cin >> B[i];
    }

    for(int i = 0; i < n1; i++)
    {
        if(A[i] == B[0])
        {
            idx = i;
            break;
        }
    }

    for(int i = 0; i < n2; i++)
    {
        if(B[i] != A[i+idx])
        {
            isChecked = true;
            break;
        }
    }

    if(isChecked)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}