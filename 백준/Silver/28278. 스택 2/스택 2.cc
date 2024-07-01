#include <bits/stdc++.h>

using namespace std;

void StackFunc(stack<int> &s, int a)
{
    switch (a)
    {
    case 1:
        int input;
        cin >> input;
        s.push(input);
        break;
    case 2:
        if (s.empty())
            cout << -1 << '\n';
        else
        {
            cout << s.top() << '\n';
            s.pop();
        }

        break;
    case 3:
        cout << s.size() << '\n';
        break;
    case 4:
        if (s.empty())
            cout << 1 << '\n';
        else
        {
            cout << 0 << '\n';
        }
        break;
    case 5:
        if (s.empty())
            cout << -1 << '\n';
        else
            cout << s.top() << '\n';
        break;
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    stack<int> s;
    while (n--)
    {
        int a;
        cin >> a;

        StackFunc(s, a);
    }

    return 0;
}