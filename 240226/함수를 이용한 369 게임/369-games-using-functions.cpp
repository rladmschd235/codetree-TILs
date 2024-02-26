#include <iostream>
using namespace std;

int func(int a, int b)
{
    int result = 0;

    for(int i = a; i < b+1; i++)
    {
        int firNum = i%10;
        int secNum = i/10;

        if(firNum % 3 == 0)
        {
            result++;
        }
        else if(secNum % 3 == 0)
        {
            result++;
        }
        else if(i%3 == 0)
        {
            result++;
        }
        else
        {
            continue;
        }
    }

    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << func(a, b);
    return 0;
}