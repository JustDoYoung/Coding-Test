#include <bits/stdc++.h>

using namespace std;

int n, m;
string s;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m >> s;

    int idx = 0;
    int cnt = 0;
    int ans = 0;

    while (idx < s.size())
    {
        if (s.substr(idx, 3) == "IOI")
        {
            cnt++;
            idx += 2;
        }
        else
        {
            idx++;
            cnt = 0;
        }

        if (cnt == n)
        {
            ans++;
            cnt -= 1;
        }
    }

    cout << ans << '\n';

    return 0;
}