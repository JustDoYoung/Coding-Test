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

        if (m.find(b) == m.end())
        {
            vector<int> v;
            m.insert({b, v});
        }

        m[b].push_back(a);
    }

    for (auto i : m)
    {
        sort(i.second.begin(), i.second.end());
        for (auto j : i.second)
        {
            cout << j << ' ' << i.first << '\n';
        }
    }

    return 0;
}