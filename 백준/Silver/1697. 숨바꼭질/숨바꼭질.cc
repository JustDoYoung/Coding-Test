#include <bits/stdc++.h>

using namespace std;

int N, K;
vector<int> arr(100004, -1);

size_t solve(size_t s, size_t e)
{
    queue<int> q;
    arr[s] = 0;
    q.push(s);

    while (!q.empty())
    {
        int now = q.front();
        int cost = arr[now];
        q.pop();

        if (now == K)
            return cost;

        if (now - 1 >= 0 && arr[now - 1] == -1)
        {
            q.push(now - 1);
            arr[now - 1] = cost + 1;
        }

        if (now + 1 <= 100004 && arr[now + 1] == -1)
        {
            q.push(now + 1);
            arr[now + 1] = cost + 1;
        }

        if (2 * now <= 100004 && arr[2 * now] == -1)
        {
            q.push(2 * now);
            arr[2 * now] = cost + 1;
        }
    }

    return -1;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> K;

    cout << solve(N, K) << '\n';

    return 0;
}
