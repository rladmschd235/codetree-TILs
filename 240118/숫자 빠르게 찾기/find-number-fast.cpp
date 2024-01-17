#include <iostream>

using namespace std;

int main() {
    int n, m, target;
    int arr[100001] = {0};
    
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 

    for(int i = 0; i < m; i++)
    {
        cin >> target;
        int idx = -1;
        int left = 0, right = n - 1;
        while (left <= right) {
        int mid = (left + right) / 2;
            if(arr[mid] == target) { // 찾았다면 해당 index를 반환합니다.
                idx = mid;
                break;
            }
        
            if(arr[mid] > target) // 찾으려는 숫자가 더 작다면
                right = mid - 1;  // 왼쪽 구간으로 이동해야 합니다.
            else                  // 찾으려는 숫자가 더 크다면
                left = mid + 1;   // 오른쪽 구간으로 이동해야 합니다.
        }
        
        cout << (idx == -1 ? idx : idx + 1) << endl; // 45가 있는 인덱스인 4가 답이 됩니다.
    }

    return 0;
}