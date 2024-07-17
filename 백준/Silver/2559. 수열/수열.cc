#include <bits/stdc++.h>

using namespace std;

int arr[100004];
int ans = -10000004;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;

        arr[i] = input + arr[i - 1];
    }

    for (int i = k; i <= n; i++)
        ans = max(ans, arr[i] - arr[i - k]);

    cout << ans << '\n';

    return 0;
}