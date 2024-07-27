#include <bits/stdc++.h>

using namespace std;

int n, m, ans;
unordered_map<int, vector<int>> graph;
stack<int> s;
bool check[1004];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        graph.insert({i, vector<int>()});
    }

    while (m--)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (auto pair : graph)
    {
        int u = pair.first;

        if (check[u])
            continue;

        ans++;

        for (int i : pair.second)
            s.push(i);

        check[u] = true;

        while (!s.empty())
        {
            int v = s.top();
            s.pop();

            if (check[v])
                continue;

            for (int i : graph[v])
                s.push(i);

            check[v] = true;
        }
    }

    cout << ans << '\n';

    return 0;
}