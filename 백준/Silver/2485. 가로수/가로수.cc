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

    int n, prev;
    cin >> n >> prev;

    n--;

    vector<int> delta;
    while (n--)
    {
        int input;
        cin >> input;

        delta.push_back(input - prev);
        prev = input;
    }

    sort(delta.begin(), delta.end());

    int gcd = INT32_MAX;
    for (int i : delta)
    {
        if (i % gcd == 0)
            continue;

        gcd = Gcd(delta[0], i);
    }

    int count = 0;
    for (int i : delta)
    {
        count += i / gcd - 1;
    }

    cout << count << endl;

    return 0;
}