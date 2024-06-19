#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n1;
    cin >> n1;

    int *v1 = new int[n1];
    for (int i = 0; i < n1; i++)
        cin >> v1[i];

    int n2;
    cin >> n2;

    pair<int, int> *v2 = new pair<int, int>[n2];
    for (int i = 0; i < n2; i++)
    {
        int input;
        cin >> input;

        v2[i] = {input, i};
    }

    sort(v1, v1 + n1);
    sort(v2, v2 + n2);

    int x = 0, y = 0;
    int *ans = new int[n2]{0};

    while (x < n1 && y < n2)
    {
        while (x < n1 && v1[x] < v2[y].first)
            x++;

        if (x >= n1)
            break;

        ans[v2[y].second] = v1[x] == v2[y].first ? 1 : 0;
        y++;
    }

    for (int i = 0; i < n2; i++)
        cout << ans[i] << ' ';

    return 0;
}