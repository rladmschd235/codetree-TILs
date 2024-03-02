#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, inputScore, curScore = 0, maxScore = 0;
    char winClassName;
    string className; 

    cin >> n;

    for(int i = 0; i < 4; i++)
    {
        cin >> className;

        curScore = 0;

        for(int j = 0; j < n; j++)
        {
            cin >> inputScore;
            curScore += inputScore;
        }

        cout << className[0] << " - " << curScore << endl;

        if(curScore > maxScore)
        {
            winClassName = className[0];
            maxScore = curScore;
        }
    }

    cout << "Class " << winClassName << " is winner!";
    return 0;
}