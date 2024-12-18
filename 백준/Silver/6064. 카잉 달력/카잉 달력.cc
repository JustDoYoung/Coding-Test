#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> t;

    while (t--)
    {
        int m, n, x, y;
        cin >> m >> n >> x >> y;

        int doom = m * n / __gcd(m, n);

        int day = x;
        while (day <= doom)
        {
            if ((day - 1) % n + 1 == y)
                break;

            day += m;
        }

        if (day > doom)
            cout << -1 << '\n';
        else
            cout << day << '\n';
    }

    return 0;
}