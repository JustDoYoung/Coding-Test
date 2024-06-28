#include <bits/stdc++.h>

using namespace std;

int Gcd(int a, int b)
{
    if (a > b)
        swap(a, b);

    int r;
    while (a)
    {
        r = b % a;
        b = a;
        a = r;
    }

    return b;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long int a, b;
    cin >> a >> b;

    cout << a * b / Gcd(a, b) << '\n';

    return 0;
}