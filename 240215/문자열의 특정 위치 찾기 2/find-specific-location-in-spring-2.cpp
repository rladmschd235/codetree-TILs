#include <iostream>
#include <string>
using namespace std;

int main() {
    string strs[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char input;
    int cnt = 0;

    cin >> input;

    for(int i = 0; i < 5; i++)
    {
        if(strs[i][2] == input || strs[i][3] == input)
        {
            cnt++;
            cout << strs[i] << endl; 
        }
    }

    cout << cnt;

    return 0;
}