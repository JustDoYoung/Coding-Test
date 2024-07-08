#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (true)
    {
        unsigned int a[3];
        cin >> a[0] >> a[1] >> a[2];

        if (a[0] == 0)
            break;

        sort(a, a + 3);

        if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2))
        {
            cout << "right" << '\n';
        }
        else
        {
            cout << "wrong" << '\n';
        }
    }

    return 0;
}