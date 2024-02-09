#include <iostream>
using namespace std;

int main() {
    int score, num, cnt = 0;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        int sum = 0;
        
        for(int j = 0; j < 4; j++)
        {
            cin >> score;
            sum += score;
        }

        if(sum/4 >= 60)
        {
            cout << "pass" << endl;
            cnt++;
        }
        else
        {
            cout << "fail" << endl;
        }
    }

    cout << cnt;

    return 0;
}