#include <iostream>
using namespace std;

int main() {
    int h, v;
    char word;
    while(true)
    {
        cin >> h >> v >> word;
        cout << h*v << endl;
        if(word == 'C')
        {
            break;
        }
    }
    return 0;
}