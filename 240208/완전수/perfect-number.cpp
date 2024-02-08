#include <iostream>
using namespace std;

int main() {
    int start, end, cnt = 0;
    cin >> start >> end;

    for(int i = start; i < end+1; i++)
    {
        int sum = 0;
        bool isPerpect = false;

        for(int j = 1; j < i; j++)
        {
            if(i%j == 0)
            {
                sum += j;
            }
        }

        if(sum == i)
        {
            isPerpect = true;
        }
        if(isPerpect)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}