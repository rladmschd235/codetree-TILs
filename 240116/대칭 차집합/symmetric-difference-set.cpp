#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> A;
    unordered_set<int> B;
    int a, b, input, sum = 0;
    cin >> a >> b;
    for(int i = 0; i < a; i++)
    {
        cin >> input;
        A.insert(input);
    }
    for(int i = 0; i < b; i++)
    {
        cin >> input;
        B.insert(input);
    }

    for(auto a : A)
    {
        if(B.find(a) == B.end())
        {
            sum++;
        }
    }
    for(auto b : B)
    {
        if(A.find(b) == A.end())
        {
            sum++;
        }
    }

    cout << sum;
    return 0;
}