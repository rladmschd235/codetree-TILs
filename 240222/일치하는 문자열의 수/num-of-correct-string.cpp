#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, input;
    int n, cnt = 0;
    cin >> n >> A;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(A == input)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}