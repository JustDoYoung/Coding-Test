#include <bits/stdc++.h>

using namespace std;

int n, m, ans = INT32_MAX;
int grid[54][54];
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;

void combination(vector<pair<int, int>> &v, int s)
{
    if (v.size() == m)
    {
        vector<int> dist(house.size(), INT32_MAX);
        for (int i = 0; i < house.size(); i++)
        {
            for (auto c : v)
            {
                int dx = abs(house[i].first - c.first);
                int dy = abs(house[i].second - c.second);

                dist[i] = min(dist[i], dx + dy);
            }
        }

        int sum = 0;
        for (int i = 0; i < dist.size(); i++)
        {
            sum += dist[i];
        }

        ans = min(ans, sum);

        return;
    }

    for (int i = s; i < chicken.size(); i++)
    {
        v.push_back(chicken[i]);
        combination(v, i + 1);
        v.pop_back();
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 1)
            {
                house.push_back({i, j});
            }
            else if (grid[i][j] == 2)
            {
                chicken.push_back({i, j});
            }
        }
    }

    vector<pair<int, int>> v;
    combination(v, 0);

    cout << ans << '\n';

    return 0;
}