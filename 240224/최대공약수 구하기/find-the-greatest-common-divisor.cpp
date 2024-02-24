#include <iostream>
using namespace std;

int Function(int n, int m)
{
    int result = 1;
    int f_n = n, f_m = m;

    while(true)
    {
        if(f_n%2 == 0 && f_m%2 == 0)
        {
            result *= 2;
            f_n /= 2;
            f_m /= 2;
        }
        else if(f_n%3 == 0 && f_m%3 == 0)
        {
            result *= 3;
            f_n /= 3;
            f_m /= 3;
        }
        else
        {
            break;
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