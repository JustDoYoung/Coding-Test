#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    bool *isPrime = new bool[b + 1];

    for (int i = 0; i <= b; i++)
        isPrime[i] = true;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= sqrt(b); i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < b + 1; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = a; i < b + 1; i++)
    {
        if (isPrime[i])
            cout << i << '\n';
    }

    return 0;
}