#include <bits/stdc++.h>

using namespace std;

int N;
int arr[130][130] = {0};
int cnt[2] = {0};

void quad(int y, int x, int w)
{
    int now = arr[y][x];

    for (int j = y; j < y + w; j++)
    {
        for (int i = x; i < x + w; i++)
        {
            if (arr[j][i] != now)
            {
                quad(y, x, w / 2);
                quad(y, x + w / 2, w / 2);
                quad(y + w / 2, x, w / 2);
                quad(y + w / 2, x + w / 2, w / 2);
                return;
            }
        }
    }

    if (now)
        cnt[1]++;
    else
        cnt[0]++;
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
            cin >> arr[i][j];
        }
    }

    quad(0, 0, N);
    cout << cnt[0] << '\n';
    cout << cnt[1] << '\n';

    return 0;
}