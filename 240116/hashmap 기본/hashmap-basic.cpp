#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<int, int> hashmap;
    int n, k, v;
    string command;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> command;

        if(command == "add")
        {
            cin >> k >> v;
            hashmap[k] = v;
        }
        else if(command == "remove")
        {
            cin >> k;
            hashmap.erase(k);
        }
        else if(command == "find")
        {
            cin >> k;
            if(hashmap.find(k) != hashmap.end())
            {
                cout << hashmap[k] << endl;
            }
            else
            {
                cout << "None" << endl;
            }
        }
    }
    return 0;
}