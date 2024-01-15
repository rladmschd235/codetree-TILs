#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<long long int, long long int> hashmap;
    int n, x, y, sum = 0;
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