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

    while (true)
    {
        string input;
        cin >> input;

        if (input == "0")
            break;

        int l = input.length();

        bool check = true;
        for (int i = 0; i < l / 2; i++)
        {
            if (input[i] - input[l - i - 1] != 0)
                check = false;
        }

        if (check)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}