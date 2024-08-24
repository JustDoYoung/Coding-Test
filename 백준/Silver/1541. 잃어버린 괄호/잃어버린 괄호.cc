#include <bits/stdc++.h>

using namespace std;

string input;
stack<int> nums;

void solve(string input)
{
    int s = 0;
    int e = min(input.find('+', s), input.find('-', s));

    int op = 0;

    while (e != string::npos)
    {
        nums.push(atoi(input.substr(s, e).c_str()));

        if (op > 0)
        {
            op--;
            int tmp1 = nums.top();
            nums.pop();
            int tmp2 = nums.top();
            nums.pop();

            nums.push(tmp1 + tmp2);
        }

        if (input[e] == '+')
            op++;

        s = e + 1;
        e = min(input.find('+', s), input.find('-', s));
    }

    nums.push(atoi(input.substr(s).c_str()));

    if (op > 0)
    {
        op--;
        int tmp1 = nums.top();
        nums.pop();
        int tmp2 = nums.top();
        nums.pop();

        nums.push(tmp1 + tmp2);
    }

    stack<int> tmp;

    while (!nums.empty())
    {
        tmp.push(nums.top());
        nums.pop();
    }

    nums = tmp;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> input;
    solve(input);

    int ans = nums.top();
    nums.pop();

    while (!nums.empty())
    {
        ans -= nums.top();
        nums.pop();
    }

    cout << ans << endl;

    return 0;
}