#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int deltaX[4] = {-1, 0, 1, 0};
    int deltaY[4] = {0, -1, 0, 1};

    while (n--)
    {
        int m, n, k;
        cin >> m >> n >> k;

        int check[2504]{false};
        int count = 0;
        while (k--)
        {
            int x, y;
            cin >> x >> y;

            check[x + m * y] = true;
        }

        stack<int> s;

        for (int i = 0; i < m * n; i++)
        {
            if (check[i] == false)
                continue;

            count++;
            s.push(i);

            while (!s.empty())
            {
                check[s.top()] = false;
                int x = s.top() % m;
                int y = s.top() / m;
                s.pop();

                for (int j = 0; j < 4; j++)
                {
                    int dx = x + deltaX[j];
                    int dy = y + deltaY[j];

                    if (dx < 0 || dx >= m)
                        continue;
                    if (dy < 0 || dy >= n)
                        continue;

                    if (check[dx + m * dy])
                        s.push(dx + m * dy);
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}