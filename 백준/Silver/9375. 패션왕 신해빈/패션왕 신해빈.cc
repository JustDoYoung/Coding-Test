#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;

        unordered_map<string, int> m;
        while (t--)
        {
            string cloth, type;
            cin >> cloth >> type;
            if (m.find(type) == m.end())
                m.insert({type, 0});

            m[type]++;
        }

        int ans = 1;

        for (auto i : m)
            ans *= (1 + i.second);

        cout << ans - 1 << '\n';
    }

    return 0;
}