#include <bits/stdc++.h>

using namespace std;

int wood[1000004];
unsigned int len;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n >> len;

    int s = 0;
    int e = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> wood[i];

        e = max(e, wood[i]);
    }

    int m = (s + e) / 2;
    while (s <= e)
    {
        m = (s + e) / 2;

        unsigned long long temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (wood[i] < m)
                continue;
            temp += wood[i] - m;
        }

        if (temp < len)
            e = m - 1;
        else
        {
            ans = m;
            s = m + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}