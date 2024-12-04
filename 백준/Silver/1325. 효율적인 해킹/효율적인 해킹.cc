#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<int> arr[10004];
int dp[10004];
bool visited[10004];

int dfs(int x)
{
    int ret = 1;
    visited[x] = true;
    if (arr[x].size() == 0)
        return ret;

    for (int i = 0; i < arr[x].size(); i++)
    {
        if (visited[arr[x][i]])
            continue;

        ret += dfs(arr[x][i]);
    }

    return ret;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[b].push_back(a);
    }

    int mx = 0;
    for (int i = 1; i <= N; i++)
    {
        fill(&visited[0], &visited[0] + 10004, false);
        dp[i] = dfs(i);
        mx = max(mx, dp[i]);
    }

    for (int i = 1; i <= N; i++)
    {
        if (mx == dp[i])
            cout << i << " ";
    }

    return 0;
}