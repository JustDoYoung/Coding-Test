#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    set<string> s;
    while (N--)
    {
        string input;
        cin >> input;

        s.insert(input);
    }

    int count = 0;
    while (M--)
    {
        string input;
        cin >> input;

        if (s.find(input) != s.end())
            count++;
    }

    cout << count << endl;

    return 0;
}