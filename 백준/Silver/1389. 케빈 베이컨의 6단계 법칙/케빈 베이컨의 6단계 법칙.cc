#include <bits/stdc++.h>

using namespace std;

int n, m;
unordered_map<int, set<int>> graph;
vector<int> ans(101, 0);

void solveBFS(int v)
{
    vector<int> kebin(n + 1, 0);
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        for (int i : graph[now])
        {
            if (visited[i])
                continue;

            kebin[i] = kebin[now] + 1;
            visited[i] = true;
            q.push(i);
        }
    }

    ans[v] = accumulate(kebin.begin(), kebin.end(), 0);
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        if (graph.find(a) == graph.end())
            graph.insert({a, set<int>()});
        if (graph.find(b) == graph.end())
            graph.insert({b, set<int>()});

        graph[a].insert(b);
        graph[b].insert(a);
    }

    for (int i = 1; i <= n; i++)
        solveBFS(i);

    cout << min_element(ans.begin() + 1, ans.begin() + n + 1) - ans.begin() << '\n';

    return 0;
}