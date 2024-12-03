#include <bits/stdc++.h>

using namespace std;

const int blank = -100;
int N, start;
vector<int> arr[54];

int solve(int idx)
{
    int cnt = 0;

    stack<int> s;
    s.push(start);

    while (!s.empty())
    {
        int now = s.top();
        s.pop();

        if (now == idx)
            continue;

        for (int i = 0; i < arr[now].size(); i++)
        {
            if (arr[now][i] == idx)
            {
                arr[now].erase(arr[now].begin() + i--);
                continue;
            }

            s.push(arr[now][i]);
        }

        if (arr[now].size() == 0)
            cnt++;
    }

    return cnt;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;

        if (input == -1)
        {
            start = i;
            continue;
        }

        arr[input].push_back(i);
    }

    int idx;
    cin >> idx;

    cout << solve(idx) << '\n';

    return 0;
}