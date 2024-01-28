#include <iostream>
using namespace std;

int main() {
    int n, classRoom = 0, corridor = 0, restroom = 0;
    cin >> n;
    for(int i = 1; i < n+1; i++)
    {
        if(i%12 == 0)
        {
            restroom++;
        }
        else if(i%3 == 0)
        {
            corridor++;
        }
        else if(i%2 == 0)
        {
            classRoom++;
        }
    }
    cout << classRoom << " " << corridor << " " << restroom;
    return 0;
}