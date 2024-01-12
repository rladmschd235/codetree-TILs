#include <iostream>
#include <queue>
using namespace std;

int n, m;
int board[100][100];
queue<pair<int, int> > q;
bool visited[100][100];

void BFS() {

    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();

        int dx[4] = { 1, -1, 0, 0 };
        int dy[4] = { 0, 0, 1, -1 };

        // queue에서 뺀 원소의 위치를 기준으로 4방향을 확인해봅니다.
        for (int dir = 0; dir < 4; dir++) {
            
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            if(nx < 0 || ny < 0 || nx >= n || ny >= m)
            {
                continue;
            }
            // 코드 완성
            if(board[nx][ny] && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }
    }

}

int main() {
    cin >> n >> m; // n:행사이즈, m:열사이즈

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    q.push(make_pair(0, 0));
    visited[0][0] = true;

    BFS();

    // 도착점 방문한 적이 있는지 여부를 출력
    cout << visited[n - 1][m - 1];

    return 0;
}