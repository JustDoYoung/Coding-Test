#include "bits/stdc++.h"

using namespace std;

int T, N, M, K;
int cnt = 0;

int dirY[] = {1, 0, -1, 0};
int dirX[] = {0, 1, 0, -1};

void dfs(int arr[][54], bool visited[][54], int y, int x)
{
    if (visited[y][x])
        return;

    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int dy = y + dirY[i];
        int dx = x + dirX[i];

        if (dy < 0 || dy >= N || dx < 0 || dx >= M)
            continue;
        if (visited[dy][dx])
            continue;
        if (arr[dy][dx] == 0)
            continue;

        dfs(arr, visited, dy, dx);
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;

    while (T--)
    {
        cin >> M >> N >> K;

        int arr[54][54] = {0};
        bool visited[54][54] = {0};

        for (int i = 0; i < K; i++)
        {
            int y, x;
            cin >> x >> y;

            arr[y][x] = 1;
        }

        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                if (visited[j][i])
                    continue;
                if (arr[j][i] == 0)
                    continue;

                dfs(arr, visited, j, i);
                cnt++;
            }
        }

        cout << cnt << '\n';
        cnt = 0;
    }
}