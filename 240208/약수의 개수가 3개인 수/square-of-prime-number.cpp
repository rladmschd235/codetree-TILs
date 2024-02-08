#include <iostream>
using namespace std;

int main() {
    int start, end, cnt = 0;
    cin >> start >> end;

    for(int i = start; i < end+1; i++)
    {
        int cnt_j = 0;

        for(int j = 1; j < i+1; j++)
        {
            if(i%j == 0)
            {
                cnt_j++;
            }
        }

        if(cnt_j == 3)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}