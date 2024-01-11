#include <iostream>
using namespace std;

void PrintStar1(int n)
{
    if(n == 0)
    {
        return;
    }

    for(int i = 0; i < n; i++)
    {
        cout << "*" << " ";
    }
    cout << "\n";
    PrintStar1(n-1);
    for(int i = 0; i < n; i++)
    {
        cout << "*" << " ";
    }
    cout << "\n";
}

int main() {
    int n;

    cin >> n;

    PrintStar1(n);

    return 0;
}