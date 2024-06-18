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

    vector<int> v;
    vector<int> v2;

    while (n--)
    {
        int input;
        cin >> input;

        v.push_back(input);
    }

    v2 = v;

    sort(v2.begin(), v2.end());
    auto e = unique(v2.begin(), v2.end());

    map<int, int> m;

    for (int i = 0; i < e - v2.begin(); i++)
        m.insert({v2[i], i});

    for (int i : v)
        cout << m[i] << ' ';

    return 0;
}