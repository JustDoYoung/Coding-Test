#include <bits/stdc++.h>

using namespace std;

int N, M, cnt, ans1, ans2;
int grid[103][103];
bool visited[103][103];

int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};

void melt(int y, int x)
{
    visited[y][x] = true;

    if (grid[y][x] == 1)
    {
        grid[y][x] = 0;
        cnt++;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M)
            continue;
        if (visited[ny][nx])
            continue;

        melt(ny, nx);
    }

    return;
}

bool isAllMelted()
{
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            if (grid[j][i] == 1)
                return false;
        }
    }

    return true;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            cin >> grid[j][i];
        }
    }

    while (true)
    {
        fill(&visited[0][0], &visited[0][0] + 103 * 103, false);
        cnt = 0;

        melt(0, 0);
        ans2 = cnt;
        ans1++;

        if (isAllMelted())
            break;
    }

    cout << ans1 << '\n'
         << ans2 << '\n';

    return 0;
}