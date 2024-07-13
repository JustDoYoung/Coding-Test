#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> note;
    while (n--)
    {
        string site, password;
        cin >> site >> password;

        note.insert({site, password});
    }

    while (m--)
    {
        string input;
        cin >> input;

        cout << note[input] << '\n';
    }

    return 0;
}