#include <bits/stdc++.h>

using namespace std;

bool Compare(int a, int b)
{
    return a > b;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> v;

    do
    {
        v.push_back(n % 10);
    } while (n /= 10);

    sort(v.begin(), v.end(), Compare);

    for (int i : v)
        cout << i;

    return 0;
}