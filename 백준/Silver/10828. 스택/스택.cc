#include <bits/stdc++.h>

using namespace std;

map<string, int> m;
enum type
{
    push,
    pop,
    size,
    empty,
    top
};

void stackFunc(stack<int> &s, string input)
{
    switch (m[input])
    {
    case 0:
        int x;
        cin >> x;
        s.push(x);
        break;
    case 1:
        if (s.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s.top() << endl;
            s.pop();
        }
        break;
    case 2:
        cout << s.size() << endl;
        break;
    case 3:
        if (s.empty())
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        break;
    case 4:
        if (s.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s.top() << endl;
        }
        break;
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string arr[] = {"push", "pop", "size", "empty", "top"};

    for (int i = 0; i < 5; i++)
    {
        m.insert({arr[i], i});
    }

    int n;
    cin >> n;

    stack<int> s;
    while (n--)
    {
        string input;
        cin >> input;

        stackFunc(s, input);
    }

    return 0;
}