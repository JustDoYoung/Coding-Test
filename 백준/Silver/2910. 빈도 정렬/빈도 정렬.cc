#include <bits/stdc++.h>

using namespace std;

int N, C;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    map<int, int> m;
    vector<pair<int, int>> v;

    cin >> N >> C;

    while (N--)
    {
        int input;
        cin >> input;

        if (m.find(input) == m.end())
        {
            m[input] = 0;
            v.push_back({input, 0});
        }

        m[input]++;
    }

    for (auto &ele : v)
        ele.second = m[ele.first];

    stable_sort(v.begin(), v.end(), [](auto a, auto b)
         { return a.second > b.second; });

    for (auto ele : v)
        for (int i = 0; i < ele.second; i++)
            cout << ele.first << ' ';

    return 0;
}
