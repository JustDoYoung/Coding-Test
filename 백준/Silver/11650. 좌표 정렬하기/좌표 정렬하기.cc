#include <bits/stdc++.h>

using namespace std;

bool Compare(int a, int b)
{
    return a > b;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int, vector<int>> m;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        if (m.find(a) == m.end())
        {
            vector<int> v;
            m.insert({a, v});
        }

        m[a].push_back(b);
    }

    for (auto i : m)
    {
        sort(i.second.begin(), i.second.end());
        for (auto j : i.second)
        {
            cout << i.first << ' ' << j << '\n';
        }
    }

    return 0;
}