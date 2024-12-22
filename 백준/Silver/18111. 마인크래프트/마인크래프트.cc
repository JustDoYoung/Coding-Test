#include <bits/stdc++.h>

using namespace std;

int n, m, b;
int grid[504][504];

int solve(int height)
{
    int inven = b;
    int time = 0;

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int cur = grid[i][j];

            if (cur == height)
                continue;

            if (cur > height)
            {
                time += (cur - height) * 2;
                inven += (cur - height);
                continue;
            }

            if (cur < height)
            {
                q.push(cur);
                continue;
            }
        }
    }

    while (!q.empty())
    {
        int tmp = height - q.front();
        if (inven < tmp)
            return INT32_MAX;

        time += tmp;
        inven -= tmp;
        q.pop();
    }

    return time;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m >> b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int time = INT32_MAX;
    int height = 0;

    for (int i = 0; i <= 256; i++)
    {
        int tmp = solve(i);

        if (tmp <= time)
        {
            time = tmp;
            height = i;
        }
    }

    cout << time << ' ' << height << '\n';

    return 0;
}