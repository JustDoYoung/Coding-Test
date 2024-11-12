#include "bits/stdc++.h"

using namespace std;

int N, M, J;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M >> J;

    int s = 1;
    int e = s + M - 1;
    int ans = 0;

    for (int i = 0; i < J; i++)
    {
        int spot;
        cin >> spot;

        if (spot < s)
        {
            ans += s - spot;
            s = spot;
            e = s + M - 1;
        }
        else if (e < spot)
        {
            ans += spot - e;
            e = spot;
            s = e - M + 1;
        }
    }

    cout << ans << endl;

    return 0;
}