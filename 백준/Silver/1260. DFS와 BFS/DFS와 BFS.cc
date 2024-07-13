#include <bits/stdc++.h>

using namespace std;

int n, m, v;
unordered_map<int, set<int>> graph;

vector<bool> visited(1001, false);
vector<int> dfs;
void printDFS()
{
    for (int i : dfs)
    {
        cout << i << ' ';
    }
    cout << '\n';
}
void solveDFS(int now)
{
    dfs.push_back(now);
    visited[now] = true;

    for (int i : graph[now])
    {
        if (visited[i])
            continue;

        solveDFS(i);
    }
}

void solveBFS()
{
    vector<int> bfs;
    queue<int> q;
    q.push(v);
    visited[v] = true;
    bfs.push_back(v);

    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        queue<int> temp;
        for (int i : graph[now])
        {
            if (visited[i])
                continue;

            visited[i] = true;
            q.push(i);
            temp.push(i);
        }

        while (!temp.empty())
        {
            bfs.push_back(temp.front());
            temp.pop();
        }
    }

    for (int i : bfs)
        cout << i << ' ';
    cout << '\n';
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m >> v;

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

    solveDFS(v);
    printDFS();
    fill(visited.begin(), visited.end(), false);
    solveBFS();

    return 0;
}