#include <bits/stdc++.h>

using namespace std;

int cnt[10];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    string x = to_string(a * b * c);

    for (char c : x)
    {
        cnt[c - '0']++;
    }

    for (int i = 0; i < 10; i++)
        cout << cnt[i] << '\n';

    return 0;
}