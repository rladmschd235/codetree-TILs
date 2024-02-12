#include <iostream>
using namespace std;

int main() {
    int n, a, b, q, command;

    cin >> n >> q;

    int arr[100] = { 0 };

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> command;

        if (command == 1)
        {
            cin >> a;

            cout << arr[a - 1] << endl;
        }
        else if (command == 2)
        {
            int idx = -1;
            cin >> a;

            for (int j = n - 1; j >= 0; j--)
            {
                if (a == arr[j])
                {
                    idx = j + 1;
                }
            }
            if (idx == -1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << idx << endl;
            }
        }
        else if (command == 3)
        {
            cin >> a >> b;

            for (int j = a - 1; j < b; j++)
            {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}