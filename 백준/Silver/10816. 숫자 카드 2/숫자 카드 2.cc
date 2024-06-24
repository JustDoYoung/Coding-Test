#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n;

    unordered_map<int, int> mp;
    while (n--)
    {
        int input;
        cin >> input;

        if (mp.find(input) == mp.end())
        {
            mp.insert({input, 0});
        }

        mp[input]++;
    }

    cin >> m;
    while (m--)
    {
        int input;
        cin >> input;

        cout << mp[input] << ' ';
    }

    return 0;
}