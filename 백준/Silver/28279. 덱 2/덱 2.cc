#include <bits/stdc++.h>

using namespace std;

int N;
deque<int> d;

void solve(int input)
{
    int x = 0;
    switch (input)
    {
    case 1:
    {
        cin >> x;
        d.push_front(x);
        break;
    }
    case 2:
    {
        cin >> x;
        d.push_back(x);
        break;
    }
    case 3:
    {
        if (d.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << d.front() << '\n';
            d.pop_front();
        }
        break;
    }
    case 4:
    {
        if (d.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << d.back() << '\n';
            d.pop_back();
        }
        break;
    }
    case 5:
    {
        cout << d.end() - d.begin() << '\n';
        break;
    }
    case 6:
    {
        if (d.empty())
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
        break;
    }
    case 7:
    {
        if (d.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << d.front() << '\n';
        }
        break;
    }
    case 8:
    {
        if (d.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << d.back() << '\n';
        }
        break;
    }
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    while (N--)
    {
        int input;
        cin >> input;

        solve(input);
    }

    return 0;
}