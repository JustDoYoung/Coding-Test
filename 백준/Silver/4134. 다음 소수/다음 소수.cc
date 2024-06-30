#include <bits/stdc++.h>

using namespace std;

bool IsPrime(long long input)
{
    for (long long i = 2; i <= sqrt(input); i++)
    {
        if (input % i == 0)
            return false;
    }

    return true;
}

bool NextPrime(long long input)
{
    bool arr[100];
    for (int i = 0; i < 100; i++)
        arr[i] = true;

    arr[0] = IsPrime(input);
    arr[1] = IsPrime(input + 1);

    for (long long i = 2; i <= sqrt(input + 100); i++)
    {
        long long j = (input + 2) % i == 0 ? (input + 2) : i * ((input + 2) / i) + i;
        j -= input;

        if (j >= 100)
            continue;

        for (; j < 100; j += i)
        {
            arr[j] = false;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        if (arr[i])
        {
            cout << input + i << '\n';
            return false;
        }
    }
    return true;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    while (n--)
    {
        long long input;
        cin >> input;

        if (input == 0 || input == 1)
        {
            cout << 2 << '\n';
        }
        else
        {
            while (NextPrime(input))
            {
                input += 100;
            }
        }
    }

    return 0;
}