#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++)
        v[i] += v[i - 1];

    cout << accumulate(v.begin(), v.end(), 0) << '\n';

    return 0;
}