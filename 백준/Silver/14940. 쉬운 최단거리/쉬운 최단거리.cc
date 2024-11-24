#include <bits/stdc++.h>

using namespace std;

int n, m, sx, sy;
int arr[1003][1003];
bool visited[1003][1003];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void bfs(int y, int x)
{
    queue<pair<int, int>> q;
    q.push({y, x});
    arr[y][x] = 0;

    while (!q.empty())
    {
        tie(y, x) = q.front();
        q.pop();

        int now = arr[y][x];
        visited[y][x] = true;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;
            if (visited[ny][nx])
                continue;
            if (arr[ny][nx] == 0)
                continue;

            visited[ny][nx] = true;
            arr[ny][nx] = now + 1;
            q.push({ny, nx});
        }
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            int input;
            cin >> input;

            if (input == 2)
            {
                sx = i;
                sy = j;
            }

            arr[j][i] = input;
        }
    }

    bfs(sy, sx);

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            if (visited[j][i] == false && arr[j][i] != 0)
                cout << -1 << " ";
            else
                cout << arr[j][i] << " ";
        }
        cout << "\n";
    }

    return 0;
}