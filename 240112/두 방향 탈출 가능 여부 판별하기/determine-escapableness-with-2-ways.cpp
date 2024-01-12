#include <iostream>
#include <vector>

#define MAX_NUM 1000
using namespace std;

int n, m;
int vertex_cnt;

// index를 1번 부터 사용하기 위해 MAX_NUM+1만큼 할당합니다.
int graph[MAX_NUM + 1][MAX_NUM + 1];
bool visited[MAX_NUM + 1][MAX_NUM + 1];

void DFS(int x, int y)
{
    int dx[2] = { 1,0 };
    int dy[2] = { 0,1 };

    for (int i = 0; i < 2; i++)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if (nx > n || ny > m)
        {
            continue;
        }

        if (graph[nx][ny])
        {
            graph[nx][ny] = vertex_cnt++;
            visited[nx][ny] = true;
            DFS(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    int v;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            cin >> v;
            graph[i][j] = v;
        }
    }

    vertex_cnt = 0;
    visited[1][1] = true;
    DFS(1, 1);

    if (visited[n][m])
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}