#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool isChecked = false;
    cin >> a >> b;
    for(int i = a; i < b+1; i++)
    {
        if(1920%i == 0 && 2880%i == 0)
        {
            isChecked = true;
        }
    }
    cout << isChecked;
    return 0;
}