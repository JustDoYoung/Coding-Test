#include <bits/stdc++.h>

using namespace std;

int N;
int arr[30][30] = {0};
bool visited[30][30] = {0};

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

vector<int> ans;

int dfs(int y, int x)
{
    visited[y][x] = true;

    int cnt = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= N)
            continue;
        if (visited[ny][nx])
            continue;
        if (arr[ny][nx] == 0)
            continue;

        cnt += dfs(ny, nx);
    }

    return cnt;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int j = 0; j < N; j++)
    {
        string input;
        cin >> input;

        for (int k = 0; k < N; k++)
        {
            arr[j][k] = input[k] - '0';
        }
    }

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (visited[j][i])
                continue;
            if (arr[j][i] == 0)
                continue;

            ans.push_back(dfs(j, i));
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << '\n';
    for (int cnt : ans)
    {
        cout << cnt << '\n';
    }

    return 0;
}