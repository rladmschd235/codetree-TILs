#include <iostream>
using namespace std;

int main() {
    int sex, age;
    cin >> sex >> age;

    if(sex == 0)
    {
        if(age >= 19)
        {
            cout << "MAN";
            return 0;
        }
        else
        {
            cout << "BOY";
            return 0;
        }
    }
    if(sex == 1)
    {
        if(age >= 19)
        {
            cout << "WOMAN";
            return 0;
        }
        else
        {
            cout << "GIRL";
            return 0;
        }
    }
    return 0;
}