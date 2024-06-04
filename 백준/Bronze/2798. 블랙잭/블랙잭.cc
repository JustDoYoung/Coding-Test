#include <bits/stdc++.h>

using namespace std;

static int N, M;
static int sum = 0;
static vector<int> arr;
static vector<int> v;

void UpdateSum()
{
    int temp = accumulate(v.begin(), v.end(), 0);

    if (temp > M)
        return;

    sum = max(sum, temp);
}

void Combination(int s)
{
    if (v.size() == 3)
    {
        UpdateSum();
        return;
    }

    for (int i = s; i < N; i++)
    {
        v.push_back(arr[i]);
        Combination(i + 1);
        v.pop_back();
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;

        arr.push_back(input);
    }

    Combination(0);

    cout << sum << '\n';

    return 0;
}