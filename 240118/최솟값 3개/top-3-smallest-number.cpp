#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> pq;
    vector<int> arr;
    int n, m;
    long long int result = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        arr.push_back(m);

        if (arr.size() > 2)
        {
            result = 1;
            for (int j = 0; j < arr.size(); j++)
            {
                pq.push(-arr[j]);
            }
            for (int j = 0; j < 3; j++)
            {
                result *= -pq.top();
                pq.pop();
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