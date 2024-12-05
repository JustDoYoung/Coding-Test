#include <bits/stdc++.h>

using namespace std;

int N, M, ans = INT32_MAX;
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;

void combination(vector<pair<int, int>> v, int s)
{
    if (v.size() == M)
    {
        int dist[104];
        fill(&dist[0], &dist[0] + 104, INT32_MAX);

        for (int i = 0; i < house.size(); i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                int dx = abs(house[i].first - v[j].first);
                int dy = abs(house[i].second - v[j].second);

                dist[i] = min(dist[i], dx + dy);
            }
        }

        ans = min(ans, accumulate(&dist[0], &dist[0] + house.size(), 0));

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

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int input;
            cin >> input;

            if (input == 1)
            {
                house.push_back({i, j});
            }
            else if (input == 2)
            {
                chicken.push_back({i, j});
            }
        }
    }

    combination(vector<pair<int, int>>(), 0);

    cout << ans << '\n';

    return 0;
}