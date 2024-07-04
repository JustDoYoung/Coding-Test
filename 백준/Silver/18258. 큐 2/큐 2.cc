#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> um;

enum Name
{
    push,
    pop,
    size,
    empty,
    front,
    back,
};

void QueueFunc(queue<int> &q, string input)
{
    int rt = -2;

    switch (um[input])
    {
    case Name::push:
        int x;
        cin >> x;
        q.push(x);
        break;
    case Name::pop:
        if (q.empty())
        {
            rt = -1;
        }
        else
        {
            rt = q.front();
            q.pop();
        }
        break;
    case Name::size:
        rt = q.size();
        break;
    case Name::empty:
        if (q.empty())
            rt = 1;
        else
            rt = 0;
        break;
    case Name::front:
        if (q.empty())
            rt = -1;
        else
            rt = q.front();
        break;
    case Name::back:
        if (q.empty())
            rt = -1;
        else
            rt = q.back();
        break;
    }

    if (rt != -2)
        cout << rt << '\n';
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<string> names = {"push", "pop", "size", "empty", "front", "back"};

    for (int i = 0; i < names.size(); i++)
    {
        um.insert({names[i], i});
    }

    int n;
    cin >> n;

    queue<int> q;

    while (n--)
    {
        string input;
        cin >> input;

        QueueFunc(q, input);
    }

    return 0;
}