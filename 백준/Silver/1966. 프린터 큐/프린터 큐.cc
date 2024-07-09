#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int c;
    cin >> c;

    while (c--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            q.push({v[i], i});
        }

        sort(v.begin(), v.end(), greater<int>());

        int count = 0;
        for (int i : v)
        {
            while (i > q.front().first)
            {
                auto tmp = q.front();
                q.pop();
                q.push(tmp);
            }

            if (i == q.front().first)
            {
                count++;
                if (m == q.front().second)
                {
                    cout << count << endl;
                    break;
                }
                q.pop();
            }
        }
    }

    return 0;
}