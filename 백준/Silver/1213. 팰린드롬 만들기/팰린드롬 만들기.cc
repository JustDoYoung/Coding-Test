#include <bits/stdc++.h>

using namespace std;

int alpha[26];
int flag;
char mid;
string ans;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string input;
    cin >> input;

    for (char i : input)
        alpha[i - 'A']++;

    for (int i = 'Z'; i >= 'A'; i--)
    {
        if (alpha[i - 'A'] & 1)
        {
            flag++;
            mid = char(i);
            alpha[i - 'A']--;
        }

        while (alpha[i - 'A'])
        {
            ans = char(i) + ans;
            ans += char(i);
            alpha[i - 'A'] -= 2;
        }
    }

    if (flag > 1)
        cout << "I'm Sorry Hansoo" << '\n';
    else
    {
        if (mid)
            ans.insert(ans.begin() + ans.size() / 2, mid);
        cout << ans << '\n';
    }

    return 0;
}