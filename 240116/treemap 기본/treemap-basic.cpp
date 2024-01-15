#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, int> treemap;
    int n, k, v;
    string command;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> command;
        if (command == "add")
        {
            cin >> k >> v;
            treemap[k] = v;
        }
        else if (command == "remove")
        {
            cin >> k;
            treemap.erase(k);
        }
        else if (command == "find")
        {
            cin >> k;
            if (treemap.find(k) != treemap.end())
            {
                cout << treemap[k] << "\n";
            }
            else
            {
                cout << "None\n";
            }
        }
        else if (command == "print_list")
        {
            if (!treemap.empty())
            {
                for (auto t : treemap)
                {
                    cout << t.second << " ";
                }
                cout << "\n";
            }
            else
            {
                cout << "None\n";
            }
        }
    }
    return 0;
}