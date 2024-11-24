#include <bits/stdc++.h>

using namespace std;

vector<vector<vector<int>>> block =
    {
        {{0, 0}, {0, 1}, {0, 2}, {0, 3}},
        {{0, 0}, {1, 0}, {2, 0}, {3, 0}},

        {{0, 0}, {0, 1}, {1, 0}, {1, 1}},

        {{0, 0}, {1, 0}, {2, 0}, {2, 1}},
        {{1, 0}, {1, 1}, {1, 2}, {0, 2}},
        {{0, 0}, {0, 1}, {1, 1}, {2, 1}},
        {{1, 0}, {0, 0}, {0, 1}, {0, 2}},
        {{0, 1}, {1, 1}, {2, 1}, {2, 0}},
        {{0, 1}, {0, 0}, {1, 0}, {2, 0}},
        {{0, 0}, {1, 0}, {1, 1}, {1, 2}},
        {{0, 0}, {0, 1}, {0, 2}, {1, 2}},

        {{0, 0}, {1, 0}, {1, 1}, {2, 1}},
        {{1, 0}, {1, 1}, {0, 1}, {0, 2}},
        {{0, 1}, {1, 1}, {1, 0}, {2, 0}},
        {{0, 0}, {0, 1}, {1, 1}, {1, 2}},

        {{0, 0}, {0, 1}, {0, 2}, {1, 1}},
        {{0, 0}, {1, 0}, {2, 0}, {1, 1}},
        {{0, 1}, {1, 0}, {1, 1}, {1, 2}},
        {{1, 0}, {0, 1}, {1, 1}, {2, 1}}};

int board[503][503];
int N, M;

int solve()
{
    int ans = 0;

    for (auto b : block)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                int sum = 0;
                bool valid = true;
                for (auto bb : b)
                {
                    int y = j + bb[0];
                    int x = i + bb[1];
                    if (x >= 0 && x < M && y >= 0 && y < N)
                    {
                        sum += board[y][x];
                    }
                    else
                    {
                        valid = false;
                        break;
                    }
                }
                if (valid)
                {
                    ans = max(ans, sum);
                }
            }
        }
    }

    return ans;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            cin >> board[j][i];
        }
    }

    cout << solve() << '\n';

    return 0;
}