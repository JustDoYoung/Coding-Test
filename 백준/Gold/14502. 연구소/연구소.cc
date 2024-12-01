#include <bits/stdc++.h>

using namespace std;

int N, M;
int mapGrid[10][10];
bool visited[10][10];

vector<pair<int, int>> virus;
vector<pair<int, int>> wall;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void SpreadVirus(int y, int x)
{
    visited[y][x] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= M || ny < 0 || ny >= N)
            continue;
        if (visited[ny][nx] || mapGrid[ny][nx] == 1)
            continue;

        SpreadVirus(ny, nx);
    }
}

int solve()
{
    for (auto v : virus)
    {
        int y = v.first;
        int x = v.second;

        SpreadVirus(y, x);
    }

    // check walls
    int cnt = 0;

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            if (mapGrid[j][i] == 0 && visited[j][i] == false)
                cnt++;
        }
    }

    return cnt;
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
            cin >> mapGrid[j][i];
            if (mapGrid[j][i] == 2)
                virus.push_back({j, i});
            else if (mapGrid[j][i] == 0)
                wall.push_back({j, i});
        }
    }

    int ret = 0;
    for (int a = 0; a < wall.size() - 2; a++)
    {
        for (int b = a + 1; b < wall.size() - 1; b++)
        {
            for (int c = b + 1; c < wall.size(); c++)
            {
                fill(&visited[0][0], &visited[0][0] + 10 * 10, false);
                mapGrid[wall[a].first][wall[a].second] = 1;
                mapGrid[wall[b].first][wall[b].second] = 1;
                mapGrid[wall[c].first][wall[c].second] = 1;
                ret = max(ret, solve());
                mapGrid[wall[a].first][wall[a].second] = 0;
                mapGrid[wall[b].first][wall[b].second] = 0;
                mapGrid[wall[c].first][wall[c].second] = 0;
            }
        }
    }

    cout << ret << '\n';

    return 0;
}