#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> hashmap;
    int n, x, y;
    long long int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if(hashmap.find(x) != hashmap.end())
        {
            if(y < hashmap[x])
            {
                hashmap[x] = y;
            }
        }
        else
        {
            hashmap[x] = y;
        }
    }

    for(auto h : hashmap)
    {
        sum += h.second;
    }

    cout << sum;
    return 0;
}