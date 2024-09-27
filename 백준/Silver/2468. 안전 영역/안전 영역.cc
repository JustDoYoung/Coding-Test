#include "bits/stdc++.h"

using namespace std;

int dirY[] = {1, 0, -1, 0};
int dirX[] = {0, 1, 0, -1};

int N;
int arr[104][104];
int ans;

void dfs(int, int, bool[][104]);

int solve()
{
    bool visited[104][104] = {0};
    int cnt = 0;

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
            arr[y][x] = max(--arr[y][x], 0);
    }

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            if (visited[y][x])
                continue;
            if (arr[y][x] == 0)
                continue;

            dfs(y, x, visited);
            cnt++;
        }
    }

    return cnt;
}

void dfs(int y, int x, bool visited[][104])
{
    if (visited[y][x])
        return;

    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int dy = y + dirY[i];
        int dx = x + dirX[i];

        if (dy < 0 || dy >= N || dx < 0 || dx >= N)
            continue;
        if (arr[dy][dx] == 0)
            continue;
        if (visited[dy][dx])
            continue;

        dfs(dy, dx, visited);
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
            cin >> arr[y][x];
    }

    while (int tmp = solve())
    {
        ans = max(ans, tmp);
    }

    ans = ans == 0 ? 1 : ans;
    cout << ans << '\n';
}