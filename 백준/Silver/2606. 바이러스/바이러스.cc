#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    unordered_map<int, set<int>> graph;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        if (graph.find(a) == graph.end())
        {
            graph.insert({a, set<int>()});
        }
        if (graph.find(b) == graph.end())
        {
            graph.insert({b, set<int>()});
        }

        graph[a].insert(b);
        graph[b].insert(a);
    }

    vector<bool> visited(n + 1, false);
    queue<int> bfs;
    visited[1] = true;
    bfs.push(1);

    int ans = 0;
    while (!bfs.empty())
    {
        int now = bfs.front();
        bfs.pop();

        for (int i : graph[now])
        {
            if (visited[i])
                continue;

            ans++;
            visited[i] = true;
            bfs.push(i);
        }
    }

    cout << ans << '\n';

    return 0;
}