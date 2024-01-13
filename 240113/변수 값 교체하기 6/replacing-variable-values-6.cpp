#include <iostream>

int main() {
    int a = 2, b = 5;
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << "\n" << b;
    return 0;
}