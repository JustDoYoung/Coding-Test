#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    unordered_set<int> us;

    int n;
    cin >> n;

    while (n--)
    {
        int input;
        cin >> input;
        us.insert(input);
    }

    int m;
    cin >> m;

    while (m--)
    {
        int input;
        cin >> input;

        if (us.find(input) != us.end())
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}