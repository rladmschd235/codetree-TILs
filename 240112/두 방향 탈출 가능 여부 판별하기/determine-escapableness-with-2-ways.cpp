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
        int new_x = dx[i] + x;
        int new_y = dy[i] + y;

        if (graph[new_x][new_y])
        {
            graph[new_x][new_y] = vertex_cnt++;
            visited[new_x][new_y] = true;
            DFS(new_x, new_y);
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