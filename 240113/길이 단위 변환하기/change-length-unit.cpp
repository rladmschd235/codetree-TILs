#include <iostream>
using namespace std;
int main() {
    double ft = 9.2, mi = 1.3;
    cout << fixed;
    cout.precision(1);
    cout << "9.2ft = " << ft * 30.48 << "cm\n";
    cout << "1.3mi = " << mi * 160934 << "cm";
    return 0;
}