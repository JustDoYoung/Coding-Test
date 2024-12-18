#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;
int ans[1000004];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    fill(&ans[0], &ans[0] + 1000004, -1);

    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        v.push_back(input);
        while (!s.empty() && v[s.top()] < input)
        {
            ans[s.top()] = input;
            s.pop();
        }

        s.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}