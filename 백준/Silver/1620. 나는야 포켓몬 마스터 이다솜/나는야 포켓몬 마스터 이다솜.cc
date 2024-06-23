#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<string> v;
    unordered_map<string, int> um;

    int idx = 0;
    while (n--)
    {
        string input;
        cin >> input;

        v.push_back(input);
        um.insert({input, idx++});
    }

    while (m--)
    {
        string input;
        cin >> input;

        if (isdigit(input[0]))
        {
            int i = stoi(input) - 1;
            cout << v[i] << '\n';
        }
        else
        {
            cout << um[input] + 1 << '\n';
        }
    }

    return 0;
}