#include "bits/stdc++.h"

using namespace std;

int N;
char arr[70][70] = {'0'};

string solve(int y, int x, int width)
{
    if (width == 1)
        return string(1, arr[y][x]);

    char now = arr[y][x];
    string ans = "";

    for (int j = y; j < y + width; j++)
    {
        for (int i = x; i < x + width; i++)
        {
            if (now != arr[j][i])
            {
                ans += '(';
                ans += solve(y, x, width / 2);
                ans += solve(y, x + width / 2, width / 2);
                ans += solve(y + width / 2, x, width / 2);
                ans += solve(y + width / 2, x + width / 2, width / 2);
                ans += ')';

                return ans;
            }
        }
    }

    return string(1, arr[y][x]);
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
            arr[j][i] = input[i];
    }

    cout << solve(0, 0, N) << '\n';

    return 0;
}