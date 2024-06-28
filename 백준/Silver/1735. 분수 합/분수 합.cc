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

    int a[2];
    int b[2];

    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];

    int x = a[0] * b[1] + b[0] * a[1];
    int y = a[1] * b[1];

    int gcd = Gcd(x, y);

    cout << x / gcd << ' ' << y / gcd << endl;

    return 0;
}