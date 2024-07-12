#include <bits/stdc++.h>

using namespace std;

string ans;
int check[26];
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    while (n--)
    {
        string input;
        cin >> input;

        check[input[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (check[i] < 5)
            continue;

        ans += 'a' + i;
    }

    if (ans.size())
        cout << ans << '\n';
    else
        cout << "PREDAJA" << '\n';

    return 0;
}