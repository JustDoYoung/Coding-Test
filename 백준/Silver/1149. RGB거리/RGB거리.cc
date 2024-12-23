#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> cost(1001, vector<int>(3));

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> cost[i][0];
        cin >> cost[i][1];
        cin >> cost[i][2];
    }

    for (int i = 1; i < n; i++)
    {
        cost[i][0] = cost[i][0] + min(cost[i - 1][1], cost[i - 1][2]);
        cost[i][1] = cost[i][1] + min(cost[i - 1][0], cost[i - 1][2]);
        cost[i][2] = cost[i][2] + min(cost[i - 1][0], cost[i - 1][1]);
    }

    int ans = min(cost[n - 1][0], cost[n - 1][1]);
    ans = min(ans, cost[n - 1][2]);
    cout << ans << '\n';

    return 0;
}