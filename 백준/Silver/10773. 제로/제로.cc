#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    stack<int> s;
    while (n--)
    {
        int input;
        cin >> input;

        if (input == 0)
            s.pop();
        else
            s.push(input);
    }

    int count = 0;
    while (!s.empty())
    {
        count += s.top();
        s.pop();
    }

    cout << count << endl;

    return 0;
}