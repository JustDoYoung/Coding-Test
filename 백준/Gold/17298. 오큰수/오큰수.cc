#include <bits/stdc++.h>

using namespace std;

int N;
int nums[1000001];
int dp[1000001];
vector<int> store;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    fill(&dp[0], &dp[0] + 1000001, -1);

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];

        while (true)
        {
            if (store.empty() || nums[store.back()] >= nums[i])
                break;

            dp[store.back()] = nums[i];
            store.pop_back();
        }

        store.push_back(i);
    }

    for (int i = 0; i < N; i++)
        cout << dp[i] << ' ';

    return 0;
}