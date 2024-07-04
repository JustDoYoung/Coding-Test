#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    queue<int> q;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        q.push(i);

    while (q.size() > 1)
    {
        q.pop();
        int x = q.front();
        q.pop();
        q.push(x);
    }

    cout << q.front() << '\n';

    return 0;
}