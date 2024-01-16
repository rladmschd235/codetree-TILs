#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<char, int> hashmap;
    string word;
    cin >> word;
    for (int i = word.size()-1; i >= 0; i--)
    {
        hashmap[word[i]]++;
    }
    for (auto h : hashmap)
    {
        if (h.second == 1)
        {
            cout << h.first;
            return 0;
        }
    }
    cout << "None";
    return 0;
}