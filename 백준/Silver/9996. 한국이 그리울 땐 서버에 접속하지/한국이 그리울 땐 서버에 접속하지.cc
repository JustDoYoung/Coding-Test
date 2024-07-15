#include <bits/stdc++.h>

using namespace std;

int factorial(int x)
{
    int ret = 1;
    while (x > 0)
    {
        ret *= x--;
    }

    return ret;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    string pattern;
    cin >> pattern;

    int pos = pattern.find('*');

    string prefix = pattern.substr(0, pos);
    string suffix = pattern.substr(pos + 1);

    while (n--)
    {
        string input;
        cin >> input;

        if (prefix.size() + suffix.size() > input.size())
        {
            cout << "NE" << '\n';
        }
        else
        {
            string preTemp = input.substr(0, prefix.size());
            string sufTemp = input.substr(input.size() - suffix.size());

            if (preTemp == prefix && sufTemp == suffix)
            {
                cout << "DA" << '\n';
            }
            else
            {
                cout << "NE" << '\n';
            }
        }
    }

    return 0;
}