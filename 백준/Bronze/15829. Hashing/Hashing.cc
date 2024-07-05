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

    int r = 31;
    int m = 1234567891;

    int l;
    cin >> l;

    string input;
    cin >> input;

    unsigned long long sum = 0;
    for (int i = 0; i < l; i++)
    {
        int x = input[i] - 'a' + 1;
        sum += x * pow(r, i);
    }

    cout << sum % m << '\n';

    return 0;
}