#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string, int> treemap;
    string word;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> word;
        treemap[word]++;
    } 
    for(auto t : treemap)
    {
        cout << t.first << " " << t.second << "\n";
    }
    return 0;
}