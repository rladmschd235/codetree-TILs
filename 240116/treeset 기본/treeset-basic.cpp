#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set<int> treeset;
    string command;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> command;
        if (command == "add")
        {
            cin >> x;
            treeset.insert(x);
        }
        else if (command == "remove")
        {
            cin >> x;
            treeset.erase(x);
        }
        else if (command == "find")
        {
            cin >> x;
            if (treeset.find(x) != treeset.end())
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
        else if (command == "lower_bound")
        {
            cin >> x;
            
            if(treeset.lower_bound(x) != treeset.end())
            {
                cout << *treeset.lower_bound(x) << endl;
            }
            else
            {
                cout << "None" << endl;
            }
        }
        else if (command == "upper_bound")
        {
            cin >> x;
            
            if(treeset.upper_bound(x) != treeset.end())
            {
                cout << *treeset.upper_bound(x) << endl;
            }
            else
            {
                cout << "None" << endl;
            }
        }
        else if (command == "largest")
        {
            if (!treeset.empty())
            {
                cout << *treeset.rbegin() << endl;
            }
            else
            {
                cout << "None" << endl;
            }

        }
        else if (command == "smallest")
        {
            if (!treeset.empty())
            {
                cout << *treeset.begin() << endl;
            }
            else
            {
                cout << "None" << endl;
            }
        }
    }
    return 0;
}