#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> arr[103];
bool visited[103][103];

int go(int node, int to, int depth)
{
    if (depth != 0 && node == to)
        return 1;
    if (arr[node].size() == 0)
        return 0;
    if (find(arr[node].begin(), arr[node].end(), to) != arr[node].end())
        return 1;

    for (int i : arr[node])
    {
        if (visited[node][i])
            continue;

        visited[node][i] = true;
        int ret = go(i, to, ++depth);
        if (ret == 1)
            return 1;
    }

    return 0;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int input;
            cin >> input;

            if (input == 0)
                continue;

            arr[i].push_back(j);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            fill(&visited[0][0], &visited[0][0] + 103 * 103, false);
            cout << go(i, j, 0) << ' ';
        }
        cout << '\n';
    }

    return 0;
}