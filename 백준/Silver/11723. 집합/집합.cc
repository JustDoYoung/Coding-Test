#include <bits/stdc++.h>

using namespace std;

vector<int> v(21);
map<string, int> m;

void solve(string input)
{
    switch (m[input])
    {
    case 0:
    {
        int n;
        cin >> n;
        v[n]++;
        break;
    }
    case 1:
    {
        int n;
        cin >> n;
        if (v[n] > 0)
            v[n]--;
        break;
    }
    case 2:
    {
        int n;
        cin >> n;
        if (v[n] > 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
        break;
    }
    case 3:
    {
        int n;
        cin >> n;
        if (v[n] > 0)
        {
            v[n]--;
        }
        else
        {
            v[n]++;
        }
        break;
    }
    break;
    case 4:
        for (int i = 1; i < 21; i++)
            v[i] = 1;
        break;
    case 5:
        for (int i = 1; i < 21; i++)
            v[i] = 0;
        break;
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string order[] = {"add", "remove", "check", "toggle", "all", "empty"};
    for (int i = 0; i < 6; i++)
    {
        m.insert({order[i], i});
    }

    int n;
    cin >> n;

    while (n--)
    {
        string input;
        cin >> input;

        solve(input);
    }

    return 0;
}