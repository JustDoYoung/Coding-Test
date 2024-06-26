#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> v;
    unordered_set<int> us;
    for (int i = 0; i < n + m; i++)
    {
        int input;
        cin >> input;

        v.push_back(input);
        us.insert(input);
    }

    cout << us.size() - (v.size() - us.size()) << endl;

    return 0;
}