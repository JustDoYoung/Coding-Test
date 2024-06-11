#include <bits/stdc++.h>

using namespace std;

bool Comparision(int a, int b)
{
    return a > b;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        v.push_back(input);
    }

    sort(v.begin(), v.end(), Comparision);

    cout << v[k - 1] << endl;

    return 0;
}