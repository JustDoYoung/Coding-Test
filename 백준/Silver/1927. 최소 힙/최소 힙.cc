#include <bits/stdc++.h>

using namespace std;

multiset<unsigned long long> s;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    while (n--)
    {
        unsigned long long input;
        cin >> input;

        if (input == 0)
        {
            if (!s.empty())
            {
                cout << *s.begin() << '\n';
                s.erase(s.begin());
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else
        {
            s.insert(input);
        }
    }

    return 0;
}