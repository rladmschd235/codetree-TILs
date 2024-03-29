#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    int tmp[3] = { 0 };
    int n, m;
    long long int result = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        pq.push(-m);

        if (pq.size() > 2)
        {
            result = 1;
            for (int j = 0; j < 3; j++)
            {
                tmp[j] = -pq.top();
                result *= tmp[j];
                pq.pop();
            }
            for (int j = 0; j < 3; j++)
            {
                pq.push(-tmp[j]);
            }
            cout << result << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}