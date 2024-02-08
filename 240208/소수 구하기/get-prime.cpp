#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 2; i < n+1; i++)
    {
        bool isRight = false;

        for(int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                isRight = true;
            }
        }

        if(!isRight)
        {
            cout << i << " ";
        }
    }
    return 0;
}