#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, cnt = 0;

    cin >> A >> B;

    string result = to_string(A+B);

    for(int i = 0; i < result.length(); i++)
    {
        if(result[i] == '1')
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}