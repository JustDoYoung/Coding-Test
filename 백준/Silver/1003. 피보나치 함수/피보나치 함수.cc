#include <bits/stdc++.h>

using namespace std;

pair<int, int> arr[44];
int T;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    arr[0] = {1, 0};
    arr[1] = {0, 1};

    for (int i = 2; i < 41; i++)
    {
        arr[i] = {arr[i - 2].first + arr[i - 1].first, arr[i - 2].second + arr[i - 1].second};
    }

    cin >> T;

    while (T--)
    {
        int input;
        cin >> input;

        cout << arr[input].first << ' ' << arr[input].second << '\n';
    }

    return 0;
}