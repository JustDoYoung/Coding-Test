#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        int input;
        cin >> input;

        ans += pow(input, 2);
    }

    cout << ans % 10 << '\n';

    return 0;
}