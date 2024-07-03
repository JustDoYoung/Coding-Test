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

    int i = 1;
    int prev = i;

    while (n--)
    {
        int input;
        cin >> input;

        s.push(input);

        while (!s.empty())
        {
            if (s.top() == i)
            {
                i++;
                s.pop();
            }
            else
                break;
        }
    }

    if (s.empty())
        cout << "Nice" << '\n';
    else
        cout << "Sad" << '\n';

    return 0;
}