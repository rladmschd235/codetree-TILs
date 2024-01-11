#include <iostream>
using namespace std;

int A[100] = {0};

int Sum(int a1, int a2)
{
    int result = 0;

    for(int i = a1-1; i < a2; i++)
    {
        result += A[i];
    }
    
    return result;
}

int main() {
    int n, m, input, a1, a2;

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        A[i] = input;
    }

    for(int i = 0; i < m; i++)
    {
        cin >> a1 >> a2;
        cout << Sum(a1, a2) << "\n";
    }

    return 0;
}