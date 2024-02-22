#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[100] = {""};
    string s;
    int cnt = 0, idx = 0;

    while(true)
    {
        cin >> s;
        if(s == "0")
        {
            break;
        }
        if(cnt%2==0)
        {
            arr[idx] = s;
            idx++;
        }
        cnt++;
    }

    cout << cnt << endl;

    for(int i = 0; i < idx+1; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}