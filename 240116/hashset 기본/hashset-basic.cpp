#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    unordered_set<int> hashset;
    string str;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        if(str == "add")
        {
            cin >> x;
            hashset.insert(x);
        }
        else if(str == "remove")
        {
            cin >> x;
            hashset.erase(x);
        }
        else if(str == "find")
        {
            cin >> x;
            if(hashset.find(x) != hashset.end())
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
    }
    return 0;
}