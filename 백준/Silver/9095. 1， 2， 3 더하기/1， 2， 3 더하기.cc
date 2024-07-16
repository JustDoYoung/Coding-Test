#include <bits/stdc++.h>

using namespace std;

int factorial(int x)
{
    int ret = 1;
    while (x > 0)
    {
        ret *= x--;
    }

    return ret;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    vector<int> v(11, 0);
    v[1] = 1;
    v[2] = 2;
    v[3] = 4;

    for (int i = 4; i < 11; i++)
        v[i] = v[i - 1] + v[i - 2] + v[i - 3];

    while (t--)
    {
        int input;
        cin >> input;

        cout << v[input] << '\n';
    }

    return 0;
}