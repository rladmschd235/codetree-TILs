#include <iostream>
using namespace std;

int main() {
    int A1, A2, B1, B2;
    cin >> A1 >> A2 >> B1 >> B2;

    if(A1 == B1)
    {
        cout << (A2 > B2 ? "A":"B");
    }
    cout << (A1 > B1 ? "A":"B");
    return 0;
}