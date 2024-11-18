#include <bits/stdc++.h>

using namespace std;

int N, prevTime = 0;
pair<int, int> score = {0, 0}; // 1팀 : 2팀
pair<int, int> winningTime = {0, 0};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    while (N--)
    {
        int team;
        string time_s;

        cin >> team >> time_s;

        size_t minute = atoi(time_s.substr(0, 2).c_str());
        size_t second = atoi(time_s.substr(3).c_str());
        size_t time = minute * 60 + second;

        if (score.first > score.second)
        {
            winningTime.first += time - prevTime;
        }
        else if (score.first < score.second)
        {
            winningTime.second += time - prevTime;
        }

        if (team == 1)
            score.first++;
        else
            score.second++;

        prevTime = time;
    }

    size_t remainTime = 48 * 60 - prevTime;
    if (score.first > score.second)
    {
        winningTime.first += remainTime;
    }
    else if (score.first < score.second)
    {
        winningTime.second += remainTime;
    }

    int ans1 = winningTime.first;
    int ans2 = winningTime.second;

    cout << put_time(new tm{tm_sec : ans1 % 60, tm_min : ans1 / 60}, "%M:%S") << '\n';
    cout << put_time(new tm{ans2 % 60, ans2 / 60}, "%M:%S") << '\n';

    return 0;
}
