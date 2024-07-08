#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a > b)
        swap(a, b);

    while (a)
    {
        int tmp = b % a;
        b = a;
        a = tmp;
    }

    return b;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << '\n';
    cout << lcm(a, b) << '\n';

    return 0;
}