#include <iostream>
using namespace std;

int main() {
    int num;
    bool isChecked = false;
    for(int i = 0; i < 5; i++)
    {
        cin >> num;
        if(num%3 != 0)
        {
            isChecked = true;
        }
    }
    if(isChecked)
    {
        cout << 0; 
    }
    else
    {
        cout << 1;
    }
    return 0;
}