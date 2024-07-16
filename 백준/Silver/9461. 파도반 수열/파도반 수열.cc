#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<unsigned long> v(101, 0);
    v[1] = v[2] = v[3] = 1;
    v[4] = v[5] = 2;
    v[6] = 3;

    for (int i = 7; i < 101; i++)
    {
        v[i] = v[i - 5] + v[i - 1];
    }

    int t;
    cin >> t;

    while (t--)
    {
        int input;
        cin >> input;

        cout << v[input] << '\n';
    }

    return 0;
}