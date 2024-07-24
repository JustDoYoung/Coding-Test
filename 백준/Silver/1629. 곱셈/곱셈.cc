#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b, c;

ll solve(ll a, ll b)
{
    if (b == 1)
        return a % c;

    ll rt = solve(a, b / 2);
    rt = (rt * rt) % c;

    if (b % 2)
        rt = (rt * a) % c;

    return rt;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> a >> b >> c;
    cout << solve(a, b) << '\n';

    return 0;
}