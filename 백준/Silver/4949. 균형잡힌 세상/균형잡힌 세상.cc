#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (true)
    {
        string input;
        getline(cin, input);

        if (input == ".")
            break;

        stack<char> s;

        for (char c : input)
        {
            if (c == '(' || c == '[')
            {
                s.push(c);
            }
            else if (c == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    s.push(c);
                    break;
                }
                else
                    s.pop();
            }
            else if (c == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    s.push(c);
                    break;
                }
                else
                    s.pop();
            }
        }

        if (s.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
