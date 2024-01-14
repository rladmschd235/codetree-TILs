#include <iostream>
using namespace std;

int main() {
    int cm, kg;
    cin >> cm >> kg;
    int BMI = (kg * 10000) / (cm * cm);
    if(BMI >= 25)
    {
        cout << BMI << endl << "Obesity";
    }
    else
    {
        cout << BMI;
    }
    return 0;
}