#include <bits/stdc++.h>

using namespace std;

pair<int, int> check[44];
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    check[0] = {1, 0};
    check[1] = {0, 1};

    for (int i = 2; i < 41; i++)
    {
        check[i] = {check[i - 2].first + check[i - 1].first, check[i - 2].second + check[i - 1].second};
    }

    while (n--)
    {
        int input;
        cin >> input;

        cout << check[input].first << ' ' << check[input].second << '\n';
    }

    return 0;
}