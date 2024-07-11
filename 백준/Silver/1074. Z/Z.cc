#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, r, c;
    cin >> N >> r >> c;

    int w = pow(2, N);
    int count = 0;

    while (w /= 2)
    {
        int section = 2 * (r / w) + (c / w);
        count += section * w * w;

        r %= w;
        c %= w;
    }

    cout << count << endl;

    return 0;
}