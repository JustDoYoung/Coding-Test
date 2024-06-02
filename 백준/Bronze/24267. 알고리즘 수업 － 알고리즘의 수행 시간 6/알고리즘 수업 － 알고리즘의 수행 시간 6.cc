#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    unsigned long long input;
    cin >> input;

    cout << input * (input - 1) * (input - 2) / 6 << '\n';
    cout << 3 << '\n';

    return 0;
}