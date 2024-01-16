#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> hashmap;
    int n, m, number;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        hashmap[number]++;
    } 
    for(int i = 0; i < m; i++)
    {
        cin >> number;
        if(hashmap.find(number) != hashmap.end())
        {
            cout << hashmap[number] << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    return 0;
}