#include <bits/stdc++.h>

using namespace std;

int n, root, rmv, cnt;
vector<int> v[54];

void dfs(int node)
{
    if (node == rmv)
        return;

    int child = 0;
    for (int i = 0; i < v[node].size(); i++)
    {
        if (v[node][i] == rmv)
            continue;

        child++;
        dfs(v[node][i]);
    }

    if (child == 0)
        cnt++;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        if (input == -1)
            root = i;

        v[input].push_back(i);
    }

    cin >> rmv;

    dfs(root);

    cout << cnt << '\n';

    return 0;
}