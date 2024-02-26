#include <iostream>
using namespace std;

bool Search(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }

    return true;
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    for(int i = a; i < b+1; i++)
    {
        if(Search(i))
        {
            cnt += i;
        }
    }

    cout << cnt;
    return 0;
}