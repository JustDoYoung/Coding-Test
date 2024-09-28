#include "bits/stdc++.h"

using namespace std;

int dirY[] = {1, 0, -1, 0};
int dirX[] = {0, 1, 0, -1};

int M, N, K;
int arr[104][104];
int visited[104][104];

int cnt = 0;
int ar = 0;
vector<int> area;

void dfs(int, int);

void solve()
{
    for (int y = 0; y < M; y++)
    {
        for (int x = 0; x < N; x++)
        {
            if (visited[y][x])
                continue;
            if (arr[y][x] != 0)
                continue;

            dfs(y, x);
            cnt++;
            area.push_back(ar);
            ar = 0;
        }
    }

    sort(area.begin(), area.end());
}

void dfs(int y, int x)
{
    visited[y][x] = 1;
    ar++;

    for (int i = 0; i < 4; i++)
    {
        int dy = y + dirY[i];
        int dx = x + dirX[i];

        if (dy < 0 || dy >= M || dx < 0 || dx >= N)
            continue;
        if (arr[dy][dx] != 0)
            continue;
        if (visited[dy][dx])
            continue;

        dfs(dy, dx);
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> M >> N >> K;

    for (int i = 0; i < K; i++)
    {
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = y1; j < y2; j++)
        {
            for (int i = x1; i < x2; i++)
                arr[j][i]++;
        }
    }

    solve();

    cout << cnt << '\n';
    for (int i : area)
        cout << i << ' ';
}