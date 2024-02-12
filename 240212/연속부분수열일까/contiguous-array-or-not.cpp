#include <iostream>
using namespace std;
int main() {
    bool isChecked = false;
    int A[100], B[100];
    int n1, n2, idx;

    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < n1; i++)
    {
        if (A[i] == B[0])
        {
            int cnt = 0;

            for (int j = 0; j < n2; j++)
            {
                if (A[i + j] == B[j])
                {
                    cnt++;
                }
            }

            if (cnt == n2)
            {
                isChecked = true;
            }
        }
    }

    if (isChecked == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}