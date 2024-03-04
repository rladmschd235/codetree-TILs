#include <iostream>
using namespace std;

int main() {
    int sex, age;
    cin >> sex >> age;

    if(sex == 0)
    {
        if(age > 18)
        {
            cout << "M";
        }
        else
        {
            cout << "B";
        }
    }
    else
    {
        if(age > 18)
        {
            cout << "W";
        }
        else
        {
            cout << "G";
        }
    }

    return 0;
}