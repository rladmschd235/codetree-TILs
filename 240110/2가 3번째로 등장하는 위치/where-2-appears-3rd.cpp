#include <iostream>
using namespace std;

int main() {
    int array[100] = {0};
    int n, input, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        array[i] = input;
    }

    for(int i = 0; i < n; i++)
    {
        if(array[i] == 2)
        {
            cnt++;
        }
        if(cnt == 3)
        {
            cout << i+1;
            break;
        }
    }

    return 0;
}