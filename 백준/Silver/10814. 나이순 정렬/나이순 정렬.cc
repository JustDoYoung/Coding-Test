#include <bits/stdc++.h>

using namespace std;

bool Compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }

    return a.length() < b.length();
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int, vector<string>> m;

    while (n--)
    {
        int age;
        string name;

        cin >> age >> name;

        if (m.find(age) == m.end())
            m.insert({age, vector<string>()});

        m[age].push_back(name);
    }

    for (auto i : m)
    {
        for (auto j : i.second)
        {
            cout << i.first << ' ' << j << '\n';
        }
    }

    return 0;
}