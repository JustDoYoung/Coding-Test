#include <bits/stdc++.h>

using namespace std;

int T;

size_t solve(int num)
{
    int cnt2 = 0;
    int cnt5 = 0;

    for (int i = 2; i <= num; i *= 2)
    {
        cnt2 += num / i;
    }

    for (int i = 5; i <= num; i *= 5)
    {
        cnt5 += num / i;
    }

    return min(cnt2, cnt5);
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;

    while (T--)
    {
        int input;
        cin >> input;

        cout << solve(input) << '\n';
    }

    return 0;
}
