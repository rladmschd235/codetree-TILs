#include <iostream>
using namespace std;

int Function(int n, int m)
{
    int result = 0;

    if(n == m)
    {
        return n;
    }

    if(n > m)
    {
        for(int i = 1; i < n+1; i++)
        {
            if(n%i == 0 && m%i == 0)
            {
                result = i;
            }
        }
    }
    else
    {
        for(int i = 1; i < m+1; i++)
        {
            if(n%i == 0 && m%i == 0)
            {
                result = i;
            }
        }
    }

    return result;
}

int main() {
    int n, m;

    cin >> n >> m;

    cout << Function(n, m);
    return 0;
}