#include <bits/stdc++.h>

using namespace std;

int N;
char arr[65][65];

string quad(int y, int x, int w)
{
    int node = arr[y][x];
    string ret = "";

    if (w == 1)
        return string(1, node);

    for (int j = y; j < y + w; j++)
    {
        for (int i = x; i < x + w; i++)
        {
            if (arr[j][i] != node)
            {
                ret += "(";
                ret += quad(y, x, w / 2);
                ret += quad(y, x + w / 2, w / 2);
                ret += quad(y + w / 2, x, w / 2);
                ret += quad(y + w / 2, x + w / 2, w / 2);
                ret += ")";

                return ret;
            }
        }
    }

    return string(1, node);
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;

        for (int j = 0; j < N; j++)
        {
            arr[i][j] = input[j];
        }
    }

    cout << quad(0, 0, N) << '\n';

    return 0;
}
