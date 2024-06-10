#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> v;

    while (v.size() < 5)
    {
        int input;
        cin >> input;

        v.push_back(input);
    }

    sort(v.begin(), v.end());
    cout << accumulate(v.begin(), v.end(), 0) / v.size() << '\n';
    cout << v[v.size() / 2] << '\n';

    return 0;
}