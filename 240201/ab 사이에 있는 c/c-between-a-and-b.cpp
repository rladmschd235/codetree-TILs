#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool isChecked;
    cin >> a >> b >> c;
    for(int i = a; i < b+1; i++)
    {
        if(i%c == 0)
        {
            isChecked = true;
        }
    }
    if(isChecked)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}