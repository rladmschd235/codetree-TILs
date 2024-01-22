#include <iostream>
using namespace std;

int main() {
    int m;
    if( m >= 3 && m <= 5)
    {
        cout << "Spring";
    }
    else if( m >= 6 && m <= 8)
    {
        cout << "Summer";
    } 
    else if( m >= 9 && m <= 11)
    {
        cout << "Fall";
    }
    else if( m <= 2 || m == 12)
    {
        cout << "Winter";
    }
    return 0;
}