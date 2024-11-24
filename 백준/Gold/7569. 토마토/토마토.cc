#include <bits/stdc++.h>

using namespace std;

int M, N, H, total, cnt;
vector<array<array<int, 103>, 103>> layer;
queue<tuple<int, int, int>> start;

int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {1, -1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int go(queue<tuple<int, int, int>> &q)
{
    int ret = 0;

    queue<tuple<int, int, int>> nq;

    while (!q.empty())
    {
        while (!q.empty())
        {
            int x, y, z;
            tie(z, y, x) = q.front();
            q.pop();

            cnt++;

            for (int i = 0; i < 6; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                int nz = z + dz[i];

                if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= H)
                    continue;
                if (layer[nz][ny][nx] == -1)
                    continue;
                if (layer[nz][ny][nx] == 1)
                    continue;

                layer[nz][ny][nx] = 1;
                nq.push({nz, ny, nx});
            }
        }

        if (!nq.empty())
            ret++;

        while (!nq.empty())
        {
            q.push(nq.front());
            nq.pop();
        }
    }

    return ret;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> M >> N >> H;
    total = M * N * H;

    for (int k = 0; k < H; k++)
    {
        layer.push_back({});
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                int input;
                cin >> input;

                if (input == -1)
                    total--;

                if (input == 1)
                {
                    start.push({k, j, i});
                }

                layer[k][j][i] = input;
            }
        }
    }

    int ans = go(start);

    if (cnt == total)
        cout << ans << '\n';
    else
        cout << -1 << '\n';

    return 0;
}