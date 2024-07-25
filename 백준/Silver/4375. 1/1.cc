#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (cin >> n)
    {
        ll x = 1, ans = 1;

        while (true)
        {
            if (x % n == 0)
            {
                cout << ans << '\n';
                break;
            }
            else
            {
                x = (x * 10) + 1;
                x %= n;
                ans++;
            }
        }
    }

    return 0;
}