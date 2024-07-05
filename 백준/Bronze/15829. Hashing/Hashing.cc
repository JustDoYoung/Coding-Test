#include <bits/stdc++.h>

using namespace std;

struct Data
{
public:
    int cost;
    int people;
};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    const int r = 31;
    const int m = 1234567891;

    int l;
    cin >> l;

    string input;
    cin >> input;

    unsigned long long sum = 0;
    for (int i = 0; i < l; i++)
    {
        unsigned long long x = input[i] - 'a' + 1;
        for (int j = 0; j < i; j++)
        {
            x *= r;
            x %= m;
        }
        sum += x;
        sum %= m;
    }

    cout << sum << '\n';

    return 0;
}