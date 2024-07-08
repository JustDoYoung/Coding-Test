#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int x = 1;
    for (int i = 2; i <= n; i++)
        x *= i;

    return x;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    cout << factorial(a) / (factorial(b) * factorial(a - b));

    return 0;
}