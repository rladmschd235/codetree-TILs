#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a, b, sum = 0;
        cin >> a >> b;

        for(int j = a; j < b+1; j++)
        {
            if(j%2 == 0)
            {
                sum += j;
            }
        }

        cout << sum << endl;
    }
    return 0;
}