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

    vector<string> v;

    while (n--)
    {
        string input;
        cin >> input;

        v.push_back(input);
    }

    sort(v.begin(), v.end(), Compare);

    string prev = "";
    for (string i : v)
    {
        if (prev == i)
            continue;

        prev = i;
        cout << i << endl;
    }

    return 0;
}