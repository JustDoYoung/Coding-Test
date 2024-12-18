#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[10004];
bool visited[10004];
int dp[10004];

int dfs(int n)
{
    int cnt = 1;
    visited[n] = true;

    for (int i = 0; i < adj[n].size(); i++)
    {
        int next = adj[n][i];

        if (visited[next])
            continue;

        cnt += dfs(next);
    }

    return cnt;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }

    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        fill(&visited[0], &visited[0] + 10004, false);

        dp[i] = dfs(i);
        mx = max(mx, dp[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (dp[i] == mx)
        {
            cout << i << " ";
        }
    }

    return 0;
}