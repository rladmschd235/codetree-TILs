#include <iostream>
#include <string>
using namespace std;

const string str = "CodeTree!";

void Print(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << str << endl;
    }
}

int main() {
    int n;
    cin >> n;

    Print(n);
    return 0;
}