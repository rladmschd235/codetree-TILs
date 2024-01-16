#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<char, int> treemap;
    string word;
    cin >> word;
    for(int i = 0; i < word.size(); i++)
    {
        treemap[word[i]]++;
    }
    for(auto t: treemap)
    {
        if(t.second == 1)
        {
            cout << t.first;
            return 0;
        }
    }
    cout << "None";
    return 0;
}