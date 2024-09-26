#include "bits/stdc++.h"

using namespace std;

int N, M;
int arr[104][104];
int visited[104][104];

int dirY[] = {1, 0, -1, 0};
int dirX[] = {0, 1, 0, -1};

void bfs()
{
    int x, y;
    x = 0, y = 0;
    visited[y][x] = 1;
    queue<pair<int, int>> q;
    q.push({y, x});

    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();

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

            q.push({dy, dx});
            visited[dy][dx] = visited[y][x] + 1;
        }
    }
}
int main()
{
    cin >> N >> M;

    for (int j = 0; j < N; j++)
    {
        string input;
        cin >> input;
        for (int i = 0; i < M; i++)
        {
            arr[j][i] = input[i] - '0';
        }
    }
    bfs();
    cout << visited[N - 1][M - 1] << '\n';
}