#include <iostream>
#include <string>
using namespace std;

int main() {
    char A, B;
    cin >> A >> B;

    cout << (int)A+B << " " << (int)(A > B ? A-B : B-A);
    return 0;
}