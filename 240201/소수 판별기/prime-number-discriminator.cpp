#include <iostream>
using namespace std;

int main() {
    int n;
    bool isChecked = false;
    cin >> n;
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            isChecked = true;
        }
    }
    if(isChecked)
    {
        cout << 'C';
    }
    else
    {
        cout << 'P';
    }
    return 0;
}