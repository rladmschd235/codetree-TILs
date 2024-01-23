#include <iostream>
using namespace std;

int main() {
    int score1, score2;
    cin >> score1 >> score2;

    if( score1 >= 90 && score2 >= 95 )
    {
        cout << 100000;
    }
    else if( score1 >= 90 && score2 >= 90 )
    {
        cout << 50000;
    }
    else
    {
        cout << 0;
    }

    return 0;
}