#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a, b, sum = 1;
        cin >> a >> b;

        for(int j = a; j < b+1; j++)
        {
            sum *= j;
        }

        cout << sum << endl;
    }
    return 0;
}