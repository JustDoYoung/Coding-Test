#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int count = 0;
    for (int i : v)
    {
        if (k / i == 0)
            continue;

        count += k / i;
        k %= i;
    }

    cout << count << '\n';

    return 0;
}