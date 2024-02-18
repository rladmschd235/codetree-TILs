#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    string result1 = "", result2 = "";
    bool isNotSame = false;

    cin >> A >> B;

    result1 = A+B;
    result2 = B+A;

    for(int i = 0; i < result1.length(); i++)
    {
        if(result1[i] != result2[i])
        {
            isNotSame = true;
        }
    }

    if(isNotSame)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
    return 0;
}