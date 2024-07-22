#include <bits/stdc++.h>

using namespace std;

int arr[15005];
int ans;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (m > 200000)
        cout << 0 << '\n';
    else
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] + arr[j] == m)
                    ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}