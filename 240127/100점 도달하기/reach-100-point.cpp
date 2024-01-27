#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    for(int i = score; i < 101; i++)
    {
        if(i > 89)
        {
            cout << 'A' << " ";
        }
        else if(i > 79)
        {
            cout << 'B' << " ";
        }
        else if(i > 69)
        {
            cout << 'C' << " ";
        }
        else if(i > 59)
        {
            cout << 'D' << " ";
        }
        else
        {
            cout << 'F' << " ";
        }
    }
    return 0;
}