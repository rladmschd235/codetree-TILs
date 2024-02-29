#include <iostream>
using namespace std;

int A[100] = {0}, B[100] = {0};
int n1, n2;

bool Check()
{
    bool isRight = false;

    for(int i = 0; i < n1; i++)
    {
        int cnt = 0;

        for(int j = 0; j < n2; j++)
        {
            if(A[i+j] != B[j])
            {
                cnt++;
            }
        }

        if(cnt == n2)
        {
            isRight = true;
            break;
        }
    }

    return isRight;
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

    if(Check())
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}