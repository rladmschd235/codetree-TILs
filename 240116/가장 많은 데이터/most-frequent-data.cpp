#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> hashmap;
    int n, max = 0;
    string word;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> word;
        hashmap[word]++;
    }
    for(auto h : hashmap)
    {
        if(h.second > max)
        {
            max = h.second;
        }
    }
    cout << max;
    return 0;
}