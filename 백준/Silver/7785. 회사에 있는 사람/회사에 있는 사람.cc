#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> v;
    while (n--)
    {
        string name, log;
        cin >> name >> log;

        v.push_back(name);
    }

    sort(v.begin(), v.end(), greater<>());

    vector<string> ans;
    string prev = "";

    for (string i : v)
    {
        if (prev == "")
        {
            prev = i;
        }
        else
        {
            if (prev == i)
                prev = "";
            else
            {
                ans.push_back(prev);
                prev = i;
            }
        }
    }

    if (prev != "")
        ans.push_back(prev);

    for (string i : ans)
        cout << i << '\n';

    return 0;
}