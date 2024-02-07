#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    
    for(int i = 1; i < 20; i++)
    {
        for(int j = 1; j < 20; j++)
        {
            cnt++;
            cout << i << " * " << j << " = " << i * j;
            if(j % 2 == 1 && j != 19)
            {
                cout << " / ";
            }
            if(cnt == 2 || j == 19)
            {
                cnt = 0;
                cout << "\n";
            }
        }
    }
    return 0;
}