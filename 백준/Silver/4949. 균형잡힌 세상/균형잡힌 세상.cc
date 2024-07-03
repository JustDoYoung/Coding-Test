#include <bits/stdc++.h>

using namespace std;

bool Check(stack<char> &s, char target)
{
    if (s.empty())
    {
        s.push('x');
        return true;
    }

    if (s.top() == target)
        s.pop();
    else
        return true;

    return false;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (true)
    {
        string input;
        getline(cin, input);

        if (input[0] == '.')
            break;

        stack<char> s;
        for (char i : input)
        {
            if (isalpha(i) || i == ' ')
                continue;
            if (i == '.')
                break;

            if (i == ')')
            {
                if (Check(s, '('))
                    break;
            }
            else if (i == ']')
            {
                if (Check(s, '['))
                    break;
            }
            else
            {
                s.push(i);
            }
        }

        if (s.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}