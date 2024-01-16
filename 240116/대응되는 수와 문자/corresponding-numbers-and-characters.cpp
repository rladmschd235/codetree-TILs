#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, string> hashmap;
    int n, m;
    string input;
    cin >> n >> m;
    for(int i =1; i < n+1; i++)
    {
        cin >> input;
        hashmap[to_string(i)] = input;
        hashmap[input] = to_string(i);
    }
    for(int i = 0; i < m; i++)
    {
        cin >> input;
        cout << hashmap[input] << endl;
    }
    return 0;
}