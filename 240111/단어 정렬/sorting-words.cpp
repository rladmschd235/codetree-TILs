#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string word[100] = {};
    string str;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str;
        word[i] = str;
    }

    sort(word, word+n);

    for(int i = 0; i < n; i++)
    {
        cout << word[i] << "\n";
    }

    return 0;
}