#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int k, n;
    cin >> k >> n;

    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }

    unsigned long long  s = 1;
    unsigned long long  e = *max_element(v.begin(), v.end());
    unsigned long long  ans = 0;
    while (s <= e)
    {
        unsigned long long  mid = (s + e) / 2;

        unsigned long long check = 0;
        for (int i : v)
            check += i / mid;

        if (check >= n)
        {
            ans = max(ans, mid);
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}