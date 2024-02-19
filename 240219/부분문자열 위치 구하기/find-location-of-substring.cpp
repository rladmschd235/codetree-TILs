#include <iostream>
#include <string>
using namespace std;

int main() {
    string target;
    string checker;

    cin >> target >> checker;

    if(target.find(checker) != string::npos)
    {
        cout << target.find(checker);
    }
    else
    {
        cout << -1;
    }
    return 0;
}