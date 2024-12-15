#include <bits/stdc++.h>

using namespace std;

int N;
vector<pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;

    return a.second < b.second;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    while (N--)
    {
        int s, e;
        cin >> s >> e;

        v.push_back({s, e});
    }

    sort(v.begin(), v.end(), compare);

    int cnt = 0;
    int x = -1;

    for (auto i : v)
    {
        if (x <= i.first)
        {
            x = i.second;
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}