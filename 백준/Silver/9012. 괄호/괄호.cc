#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        stack<char> s;

        string input;
        getline(cin, input);

        for (char i : input)
        {
            if (i == ')')
            {
                if (s.empty())
                {
                    s.push(i);
                    break;
                }
                s.pop();
            }
            else
            {
                s.push(i);
            }
        }

        if (!s.empty())
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}