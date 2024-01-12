#include <iostream>
#include <vector>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int n, num, cnt;
int visited[100][100];
int v[100][100];

int DFS(int x, int y)
{
    num = v[x][y];
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx < 0 || ny < 0 || nx >= n || ny >= n)
        {
            continue;
        }

        if(num == v[nx][ny] && !visited[nx][ny])
        {
            visited[nx][ny] = true;
            cnt++;
            DFS(nx, ny);
        }
    }
    return cnt;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    int tmp, max = 0, block_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == false)
            {
                cnt = 1;
                tmp = DFS(i, j);
                if (tmp >= 4) block_cnt++;
                if (tmp > max) max = tmp;
            }
        }
    }

    cout << block_cnt << " " << max;
    return 0;
}