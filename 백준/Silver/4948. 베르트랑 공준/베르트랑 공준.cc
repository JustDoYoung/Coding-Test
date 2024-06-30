#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        bool *isPrime = new bool[2 * n + 1];
        for (int i = 0; i <= 2 * n; i++)
            isPrime[i] = true;

        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i <= sqrt(2 * n); i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j <= 2 * n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = n + 1; i <= 2 * n; i++)
        {
            if (isPrime[i])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}