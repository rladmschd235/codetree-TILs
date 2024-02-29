#include <iostream>
using namespace std;

int A[100] = {0}, B[100] = {0};
int n1, n2;

bool Check()
{
    bool isNotRight = false;

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(A[i+j] != B[j])
            {
                isNotRight = false;
                break;
            }
        }
    }

    return isNotRight;
}

int main() {
    cin >> n1 >> n2;

    for(int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n2; i++)
    {
        cin >> B[i];
    }

    if(!Check())
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}