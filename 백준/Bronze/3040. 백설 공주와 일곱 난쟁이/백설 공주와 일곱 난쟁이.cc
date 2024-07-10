#include <bits/stdc++.h>

using namespace std;

int nanjangii[9];
int n, r;

void solve()
{
    int check = 0;
    for (int i = 0; i < r; i++)
        check += nanjangii[i];

    if (check == 100)
    {
        sort(nanjangii, nanjangii + 7);
        for (int i = 0; i < r; i++)
            cout << nanjangii[i] << '\n';

        exit(0);
    }
}
void makePermutation(int n, int r, int depth)
{
    if (r == depth)
    {
        solve();
        return;
    }

    for (int i = depth; i < n; i++)
    {
        swap(nanjangii[i], nanjangii[depth]);
        makePermutation(n, r, depth + 1);
        swap(nanjangii[i], nanjangii[depth]);
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    n = 9;
    r = 7;
    for (int i = 0; i < 9; i++)
        cin >> nanjangii[i];

    makePermutation(n, r, 0);

    return 0;
}