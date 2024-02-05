#include <iostream>
using namespace std;

int main() {
    int n, num = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i%2 == 0)
            {
                ++num;
                cout << num << " ";
            }
            else
            {
                num += 2;
                cout << num << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}