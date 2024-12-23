#include <bits/stdc++.h>

using namespace std;

char op[] = {'D', 'S', 'L', 'R'};

int calculate(char cmd, int x)
{
    switch (cmd)
    {
    case 'D':
        return (2 * x) % 10000;
    case 'S':
        return (x - 1 + 10000) % 10000;
    case 'L':
        return (x % 1000) * 10 + (x / 1000);
    case 'R':
        return (x % 10) * 1000 + (x / 10);
    }
}
string solve(int a, int b)
{
    bool visited[10001];
    fill(&visited[0], &visited[0] + 10001, false);

    queue<pair<int, string>> q;
    q.push({a, ""});
    visited[a] = true;

    while (!q.empty())
    {
        int now = q.front().first;
        string cmd = q.front().second;
        q.pop();

        if (now == b)
            return cmd;

        for (int i = 0; i < 4; i++)
        {
            int next = calculate(op[i], now);

            if (visited[next])
                continue;

            visited[next] = true;
            q.push({next, cmd + op[i]});
        }
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << solve(a, b) << '\n';
    }

    return 0;
}