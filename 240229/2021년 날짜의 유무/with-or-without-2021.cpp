#include <iostream>
using namespace std;

int Date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool DateCheck(int m, int d)
{
    if(m < 13)
    {
        if(d > Date[m-1])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

int main() {
    int m, d;
    cin >> m >> d;

    if(DateCheck(m, d))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}