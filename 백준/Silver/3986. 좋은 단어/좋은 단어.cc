#include <bits/stdc++.h>

using namespace std;

int n;
string input;
int ans;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    while (n--)
    {
        cin >> input;

        stack<char> s;
        for (char c : input)
        {
            if (s.size() && s.top() == c)
                s.pop();
            else
                s.push(c);
        }

        if (s.size() == 0)
            ans++;
    }

    cout << ans << '\n';

    return 0;
}