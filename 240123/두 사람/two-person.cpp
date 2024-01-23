#include <iostream>
using namespace std;

int main() {
    int A_age, B_age;
    char A_sex, B_sex;

    cin >> A_age >> A_sex >> B_age >> B_sex;

    if( (A_age >= 19 && A_sex == 'M') || (B_age >= 19 && B_sex == 'M' ) )
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}