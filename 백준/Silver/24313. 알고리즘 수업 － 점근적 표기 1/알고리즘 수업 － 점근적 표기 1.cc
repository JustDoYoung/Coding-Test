#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    int check1 = c - a1;
    int check2 = a0;

    if (check1 >= 0 && check1 * n0 >= check2)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}