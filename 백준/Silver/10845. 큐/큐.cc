#include <bits/stdc++.h>

using namespace std;

map<string, int> m;
enum type
{
    push,
    pop,
    size,
    empty,
    front,
    back
};

void queueFunc(queue<int> &q, string input)
{
    switch (m[input])
    {
    case 0:
        int x;
        cin >> x;
        q.push(x);
        break;
    case 1:
        if (q.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << q.front() << endl;
            q.pop();
        }
        break;
    case 2:
        cout << q.size() << endl;
        break;
    case 3:
        if (q.empty())
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        break;
    case 4:
        if (q.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << q.front() << endl;
        }
        break;
    case 5:
        if (q.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << q.back() << endl;
        }
        break;
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string arr[] = {"push", "pop", "size", "empty", "front", "back"};

    for (int i = 0; i < 6; i++)
    {
        m.insert({arr[i], i});
    }

    int n;
    cin >> n;

    queue<int> q;
    while (n--)
    {
        string input;
        cin >> input;

        queueFunc(q, input);
    }

    return 0;
}