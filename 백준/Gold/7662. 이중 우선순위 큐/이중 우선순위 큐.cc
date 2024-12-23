#include <bits/stdc++.h>

using namespace std;

int t, k;
priority_queue<int> maxpq;
priority_queue<int, vector<int>, greater<int>> minpq;
unordered_map<int, int> nums;

void RefreshPQ()
{
    while (!maxpq.empty() && nums[maxpq.top()] == 0)
        maxpq.pop();

    while (!minpq.empty() && nums[minpq.top()] == 0)
        minpq.pop();
}

void Clear()
{
    while (!maxpq.empty())
        maxpq.pop();

    while (!minpq.empty())
        minpq.pop();

    nums.clear();
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> t;

    while (t--)
    {
        Clear();
        cin >> k;

        while (k--)
        {

            char op;
            int n;

            cin >> op >> n;

            if (op == 'I')
            {
                nums[n]++;
                maxpq.push(n);
                minpq.push(n);
            }
            else if (op == 'D')
            {
                if (n == -1)
                {
                    RefreshPQ();
                    if (!minpq.empty())
                    {
                        nums[minpq.top()]--;
                        minpq.pop();
                    }
                }
                else if (n == 1)
                {
                    RefreshPQ();
                    if (!maxpq.empty())
                    {
                        nums[maxpq.top()]--;
                        maxpq.pop();
                    }
                }
            }
        }
        RefreshPQ();
        if (maxpq.empty())
            cout << "EMPTY" << '\n';
        else
        {
            cout << maxpq.top() << ' ' << minpq.top() << '\n';
        }
    }

    return 0;
}