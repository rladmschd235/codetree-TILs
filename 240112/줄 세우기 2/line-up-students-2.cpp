#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(tuple<int, int, int>& left, tuple<int, int, int> &right)
{
    if (get<0>(left) == get<0>(right))
    {
        return get<1>(left) > get<1>(right);
    }
    return get<0>(left) < get<0>(right);
}

int main() {
    int n, h, w;

    cin >> n;

    vector<tuple<int, int, int>> info;

    for (int i = 0; i < n; i++)
    {
        cin >> h >> w;
        info.push_back({ h, w, i + 1 });
    }

    sort(info.begin(), info.end(), cmp);

    for (auto i : info)
    {
        cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << "\n";
    }

    return 0;
}