#include <bits/stdc++.h>

using namespace std;

int n, m;
pair<int, int> grid[104]; //{cnt, pos}
bool visited[104];

void go()
{
    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        for (int i = 1; i <= 6; i++)
        {
            int next = now + i;

            if (next > 100)
                continue;

            next = grid[next].second;

            if (visited[next])
                continue;

            visited[next] = true;
            grid[next].first = grid[now].first + 1;
            q.push(next);
        }
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 1; i <= 100; i++)
    {
        grid[i] = {0, i};
    }

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        grid[a] = {0, b};
    }

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        grid[a] = {0, b};
    }

    go();

    cout << grid[100].first << '\n';

    return 0;
}