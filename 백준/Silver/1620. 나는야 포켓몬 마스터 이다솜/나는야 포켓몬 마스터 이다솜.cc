#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> names;
string keys[100004];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string input;
        cin >> input;

        names.insert({input, i});
        keys[i] = input;
    }

    while (m--)
    {
        string input;
        cin >> input;

        int check = atoi(input.c_str());

        if (check == 0)
        {
            cout << names[input] << '\n';
        }
        else
        {
            cout << keys[check] << '\n';
        }
    }

    return 0;
}