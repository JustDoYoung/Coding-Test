#include <bits/stdc++.h>

using namespace std;

int a, b, c, s, e;
int timeline[104];
int cost;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++)
    {
        cin >> s >> e;
        for (int j = s; j < e; j++)
        {
            timeline[j]++;
        }
    }

    for (int i : timeline)
    {
        if (i)
        {
            if (i == 1)
                cost += a;
            else if (i == 2)
                cost += 2 * b;
            else if (i == 3)
                cost += 3 * c;
        }
    }

    cout << cost << endl;

    return 0;
}