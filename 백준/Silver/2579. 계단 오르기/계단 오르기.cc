#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> stair(n);
    for (int i = 0; i < n; i++)
        cin >> stair[i];

    vector<int> score(n);
    score[0] = stair[0];
    score[1] = stair[0] + stair[1];
    score[2] = max(stair[0] + stair[2], stair[1] + stair[2]);

    for (int i = 3; i < n; i++)
    {
        score[i] = max(stair[i] + score[i - 2], stair[i] + stair[i - 1] + score[i - 3]);
    }

    cout << score[n - 1] << '\n';

    return 0;
}