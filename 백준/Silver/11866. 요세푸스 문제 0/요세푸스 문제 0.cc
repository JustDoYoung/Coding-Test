#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    queue<int> q;
    queue<int> yose;

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        q.push(i);

    k--;
    while (!q.empty())
    {
        int tmp = k;
        while (tmp--)
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        yose.push(q.front());
        q.pop();
    }

    cout << '<';
    while (!yose.empty())
    {
        cout << yose.front();
        yose.pop();
        if (!yose.empty())
            cout << ", ";
    }
    cout << '>' << '\n';

    return 0;
}