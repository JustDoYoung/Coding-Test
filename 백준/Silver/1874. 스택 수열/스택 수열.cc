#include <bits/stdc++.h>

using namespace std;

void Print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    stack<int> s;
    vector<char> v;
    int *input = new int[n];

    s.push(1);
    v.push_back('+');
    int idx = 2;

    for (int i = 0; i < n; i++)
        cin >> input[i];

    for (int i = 0; i < n; i++)
    {
        for (; idx <= input[i]; idx++)
        {
            s.push(idx);
            v.push_back('+');
        }

        if (s.top() == input[i])
        {
            s.pop();
            v.push_back('-');
        }
    }

    if (s.empty())
    {
        for (char i : v)
            cout << i << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}