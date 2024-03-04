#include <iostream>
using namespace std;

int main() {
    bool isZero = false;
    int n, num;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;

        if(num > 0)
        {
            cout << "plus" << endl;
        }
        else if(num < 0)
        {
            cout << "minus" << endl;
        }
        else
        {
            cout << "zero" << endl;
        }
    }

    return 0;
}