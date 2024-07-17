#include <bits/stdc++.h>

using namespace std;

int arr[100004];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;

        arr[i] = input + arr[i - 1];
    }

    while (m--)
    {
        int s, e;
        cin >> s >> e;

        cout << arr[e] - arr[s - 1] << '\n';
    }

    return 0;
}