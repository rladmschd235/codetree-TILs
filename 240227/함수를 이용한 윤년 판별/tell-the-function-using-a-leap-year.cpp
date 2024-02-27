#include <iostream>
using namespace std;

bool YearCheck(int year)
{
    if(year%100 == 0 && year%400 != 0)
    {
        return false;
    }
    if(year%4 == 0)
    {
        return true;
    }
    return false;
}

int main() {
    int y;
    cin >> y;

    cout << boolalpha << YearCheck(y);
    return 0;
}