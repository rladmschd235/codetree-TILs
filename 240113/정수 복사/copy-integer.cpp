#include <iostream>

int main() {
    int a = 3; 
    int b = 4;
    b = a;
    std::cout << a << " " << b << "\n" << a * b;
    return 0;
}