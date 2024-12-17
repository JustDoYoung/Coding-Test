#include <bits/stdc++.h>

using namespace std;

int t, m, n, x, y, doom;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> t;

    while (t--)
    {
        cin >> m >> n >> x >> y;

        doom = m * n / __gcd(m, n);

        int day = x;
        while (day <= doom)
        {
            if ((day - 1) % n + 1 == y)
            {
                cout << day << '\n';
                break;
            }

            day += m;
        }

        if (day > doom)
            cout << -1 << '\n';
    }

    return 0;
}