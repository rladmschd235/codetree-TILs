#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, num;
    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cin >> num;
        sum += num;
    }

    if(sum/n > 70)
    {
        cout << fixed;
        cout.precision(1);
        cout << (double)sum/n;
    }    
    else
    {
        cout << "fail";
    }
    return 0;
}