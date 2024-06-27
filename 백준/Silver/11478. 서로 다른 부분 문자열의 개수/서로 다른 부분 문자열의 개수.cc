#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string input;
    cin >> input;

    unordered_set<string> us;

    for (int i = 1; i <= input.length(); i++)
    {
        for (int j = 0; j + i <= input.length(); j++)
        {
            us.insert(input.substr(j, i));
        }
    }

    cout << us.size() << endl;

    return 0;
}