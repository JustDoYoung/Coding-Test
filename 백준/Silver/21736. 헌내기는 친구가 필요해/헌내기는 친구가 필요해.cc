#include <bits/stdc++.h>

using namespace std;

int N, M;
char arr[603][603] = {0};
bool visited[603][603] = {0};

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};
int dfs(int x, int y)
{
    int cnt = 0;

    visited[x][y] = true;

    if (arr[x][y] == 'P')
        cnt++;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= N || ny >= M)
            continue;
        if (visited[nx][ny])
            continue;
        if (arr[nx][ny] == 'X')
            continue;

        cnt += dfs(nx, ny);
    }

    return cnt;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    int pos_x = 0;
    int pos_y = 0;

    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < M; j++)
        {
            if (input[j] == 'I')
            {
                pos_x = i;
                pos_y = j;
            }

            arr[i][j] = input[j];
        }
    }

    int ans = dfs(pos_x, pos_y);
    if (ans == 0)
        cout << "TT" << '\n';
    else
        cout << ans << '\n';

    return 0;
}