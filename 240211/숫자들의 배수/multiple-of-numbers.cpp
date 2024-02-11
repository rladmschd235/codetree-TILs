#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, index = 1, output;
    cin >> n;

    while(true)
    {
        output = n*index;
        cout << output << " ";
        index++;
        if(output%5 == 0)
        {
            cnt++;
        }
        if(cnt == 2)
        {
            break;
        }
    }
    return 0;
}