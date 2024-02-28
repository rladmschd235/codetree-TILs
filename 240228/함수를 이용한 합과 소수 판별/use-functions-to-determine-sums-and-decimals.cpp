#include <iostream>
using namespace std;

bool Checker1(int n)
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

bool Checker2(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += (n%10);
        n/=10;
    }
    if(sum%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}  

int Counter(int a, int b)
{
    int cnt = 0;

    for(int i = a; i < b+1; i++)
    {
        if(Checker1(i)&&Checker2(i))
        {
            cnt++;
        }
    }
    return cnt;
} 

int main() {
    int a, b;
    cin >> a >> b;

    cout << Counter(a,b);
    return 0;
}