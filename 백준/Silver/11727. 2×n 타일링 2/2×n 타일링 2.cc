#include <bits/stdc++.h>

using namespace std;

unsigned long long wood[1004];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    wood[1] = 1;
    wood[2] = 3;

    for (int i = 3; i <= 1000; i++)
    {
        wood[i] = (2 * wood[i - 2] + wood[i - 1]) % 10007;
    }

    int n;
    cin >> n;

    cout << wood[n] << '\n';

    return 0;
}