#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << n << endl;
        exit(0);
    }

    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int low = round(n * 0.15);
    double avg = 0;

    for (int i = low; i < n - low; i++)
    {
        avg += v[i];
    }

    cout << round(avg / (n - 2 * low)) << endl;

    return 0;
}