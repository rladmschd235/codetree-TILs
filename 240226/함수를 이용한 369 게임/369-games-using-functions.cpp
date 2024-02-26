#include <iostream>
using namespace std;

bool func(int n)
{
    if(n%3 == 0)
    {
        return true;
    }
    
    while(n > 0)
    {
        int num = n%10;
        
        if(num%3 == 0 || num%6 == 0 || num%9 == 0)
        {
            return true;
        }

        n /= 10;
    }

    return false;
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    
    for(int i = a; i < b+1; i++)
    {
        if(func(i))
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}