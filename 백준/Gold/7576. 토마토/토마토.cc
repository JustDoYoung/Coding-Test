#include <bits/stdc++.h>

using namespace std;

int M, N, total, cnt;
int layer[1003][1003];
queue<tuple<int, int>> start;

int dx[6] = {0, 0, 1, -1};
int dy[6] = {1, -1, 0, 0};

int go(queue<tuple<int, int>> &q)
{
    int ret = 0;

    queue<tuple<int, int>> nq;

    while (!q.empty())
    {
        while (!q.empty())
        {
            int x, y;
            tie(y, x) = q.front();
            q.pop();

            cnt++;

            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 || nx >= M || ny < 0 || ny >= N)
                    continue;
                if (layer[ny][nx] == -1)
                    continue;
                if (layer[ny][nx] == 1)
                    continue;

                layer[ny][nx] = 1;
                nq.push({ny, nx});
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

    cin >> M >> N;
    total = M * N;

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
                start.push({j, i});
            }

            layer[j][i] = input;
        }
    }

    int ans = go(start);

    if (cnt == total)
        cout << ans << '\n';
    else
        cout << -1 << '\n';

    return 0;
}