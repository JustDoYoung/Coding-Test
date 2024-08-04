#include "bits/stdc++.h";
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (true) {

    int n;
    cin >> n;

    if (cin.eof()) break;

    vector<int> v(n+1, INT32_MAX);
    v[0] = 0;

    for (int i = 0; i <= n; i++) {
        int j = 1;

        while (j * j <= i) {
            v[i] = min(v[i], v[i - j * j]+1);
            j++;
        }
    }

    cout << v[n] << endl;
    }

    return 0;
}