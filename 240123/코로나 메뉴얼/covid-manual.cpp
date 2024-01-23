#include <iostream>
using namespace std;

int main() {
    char symptoms;
    int temperature;
    int A = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> symptoms >> temperature;

        if(symptoms == 'Y' && temperature >= 37)
        {
            A++;
        }
    }

    cout << (A > 1 ? "E" : "N");

    return 0;
}