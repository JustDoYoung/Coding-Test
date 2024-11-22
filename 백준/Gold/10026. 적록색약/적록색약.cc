#include <bits/stdc++.h>

using namespace std;

int N, ans1, ans2;
char arr[103][103];
bool visited[103][103];

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

bool check(char c, string s)
{
    for (char cc : s)
    {
        if (c == cc)
            return true;
    }

    return false;
}
void solve(int y, int x, string s)
{
    visited[y][x] = true;


    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= N)
            continue;
        if (visited[ny][nx])
            continue;

        if (check(arr[ny][nx], s))
        {
            solve(ny, nx, s);
        }
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int j = 0; j < N; j++)
    {
        string input;
        cin >> input;

        for (int i = 0; i < N; i++)
        {
            arr[j][i] = input[i];
        }
    }

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (visited[j][i])
                continue;

            if (arr[j][i] == 'R')
            {
                ans1++;
                solve(j, i, "R");
            }
            else if (arr[j][i] == 'G')
            {
                ans1++;
                solve(j, i, "G");
            }
            else if (arr[j][i] == 'B')
            {
                ans1++;
                ans2++;
                solve(j, i, "B");
            }
        }
    }

    fill(&visited[0][0], &visited[0][0] + 103 * 103, false);
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (visited[j][i])
                continue;

            if (arr[j][i] == 'R' || arr[j][i] == 'G')
            {
                ans2++;
                solve(j, i, "RG");
            }
        }
    }

    cout << ans1 << " " << ans2 << '\n';

    return 0;
}