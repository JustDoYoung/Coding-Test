#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> v;
    int mx = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        if (mx < input)
        {
            mx = input;
            v.resize(mx + 1, 0);
        }

        v[input]++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            cout << i << ' ';
        }
    }

    return 0;
}