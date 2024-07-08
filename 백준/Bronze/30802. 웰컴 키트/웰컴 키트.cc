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

    int n;
    cin >> n;

    int shirt[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> shirt[i];
    }

    int t, p;
    cin >> t >> p;

    int shirtSum = 0;
    for (int i : shirt)
    {
        shirtSum += i / t;
        if (i % t != 0)
            shirtSum++;
    }

    cout << shirtSum << endl;
    cout << n / p << ' ' << n % p;

    return 0;
}