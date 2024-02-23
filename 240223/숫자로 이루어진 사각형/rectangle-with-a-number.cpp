#include <iostream>
using namespace std;

void PrintRect(int n)
{
    int num = 0;

    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < n; i++)
        {
            if(num == 9)
            {
                num = 0;
            }
            cout << ++num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    PrintRect(n);
    return 0;
}