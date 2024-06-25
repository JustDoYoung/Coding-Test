#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    unordered_set<string> us;
    while (n--)
    {
        string input;
        cin >> input;

        us.insert(input);
    }

    vector<string> v;
    while (m--)
    {
        string input;
        cin >> input;

        if (us.find(input) != us.end())
        {
            v.push_back(input);
        }
    }

    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (string i : v)
        cout << i << '\n';

    return 0;
}