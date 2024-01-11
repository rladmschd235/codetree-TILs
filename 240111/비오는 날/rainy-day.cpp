#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string info1, info2, info3;
    vector<tuple<string, string, string>> weather;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> info1 >> info2 >> info3;

        if (info3 == "Rain")
        {
            weather.push_back({ info1, info2, info3 });
        }
    }

    sort(weather.begin(), weather.end());

    cout << get<0>(weather[0]) << " " << get<1>(weather[0]) << " " << get<2>(weather[0]);

    return 0;
}