#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int n, cnt = 0;
        cin >> n;

        while(n > 1)
        {
            if(n%2 == 0)
            {
                cnt++;
                n /= 2;
             }
            else
            {
                cnt++;
                n = (n * 3) + 1;
            }
        }
    
        cout << cnt << endl;       
    }
    return 0;
}